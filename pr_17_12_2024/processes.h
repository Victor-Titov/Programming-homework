//
// Created by viti on 12/17/2024.
//

#ifndef TUES_2024_5_PROCESSES_H
#define TUES_2024_5_PROCESSES_H

struct process{
    char name[31];
    unsigned int id;
};
unsigned int createnewprocess(char name[30]);
void stopprocess(unsigned int id);
void listprocesses();
#endif //TUES_2024_5_PROCESSES_H
