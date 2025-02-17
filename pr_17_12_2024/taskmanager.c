#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "processes.h"

int main(){
    int option=1;
    char a=0;
    char name[30];
    unsigned int id;
    while(1){


        if(a=='w' || a=='W'){
            option--;
        }
        if(a=='s' || a=='S'){
            option++;
        }
        if(a == 13){
            switch(option){
                case 1:
                    printf("enter process name\n");
                    scanf("%s",name);
                    id= createnewprocess(name);
                    if(id==0){
                        printf("failed\n");
                    }
                    else{
                        printf("process id: %d\n",id);
                    }
                    break;
                case 2:
                    listprocesses();
                    break;

                case 3:
                    printf("enter the id of the process");
                    stopprocess(id);
                    break;
                case 4:

                    return 0;


                default: break;
            }
        }
        system("pause");
        system("cls");

        if(option>4){
            option=4;
        }
        if(option<1){
            option=1;
        }
        printf("%d\n", option);
        switch(option){
            case 1: printf(">Add a process\nList processes\nStop process\nExit");break;
            case 2: printf("Add a process\n>List processes\nStop process\nExit");break;
            case 3: printf("Add a process\nList processes\n>Stop process\nExit");break;
            case 4: printf("Add a process\nList processes\nStop process\n>Exit");break;
            default: printf("Add a process\nList processes\nStop process\nExit");break;

        }
        a=getch();
        system("cls");
    }
}