

#ifndef TUES_2024_5_SCHOOLCLASS_H
#define TUES_2024_5_SCHOOLCLASS_H
#include "person.h"

struct SchoolClass{
    struct Person students[26];
    struct Person class_teacher;
    char class_letter;
    int class_number;
};
#endif //TUES_2024_5_SCHOOLCLASS_H
