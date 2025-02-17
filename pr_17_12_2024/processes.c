//
// Created by viti on 12/17/2024.
//

#include "processes.h"
#include <limits.h>
#include <string.h>
#include <stdio.h>
extern int processcount=0;

extern struct process Processes[5];

static unsigned int newprocessid(){
    static unsigned int id=0;
    if(id==UINT_MAX){
        return 0;
    }
    return ++id;
}

unsigned int createnewprocess(char name[30]){
    if(processcount==5){
        return 0;
    }

    int tmpid=newprocessid();
    if(tmpid==0){
        return 0;
    }
    strcpy(Processes[processcount].name,name);
    Processes[processcount].id=tmpid;
    processcount++;
    return tmpid;

}

void stopprocess(unsigned int id){
    int element=-1;
    for(int i=0;i<processcount;i++){
        if(id==Processes[i].id){
            element=i;
        }
    }
    if(element==-1){
        return;
    }
    Processes[element].id=0;
    strcpy(Processes[element].name,"");
    for(int i=element;i<processcount-1;i++){
        Processes[element].id=Processes[element+1].id;
        strcpy(Processes[element].name,Processes[element+1].name);
    }
}

void listprocesses(){
    printf("number of processes: %d\n",processcount);
    for(int i=0;i<processcount;i++){
        printf("process %d:\n   name:%s\n   id:%u\n\n",i,Processes[i].name,Processes[i].id);
    }
}