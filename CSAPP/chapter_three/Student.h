//
// Created by k'k'k on 2024/9/25.
//

#ifndef C__PROJECT_STUDENT_H
#define C__PROJECT_STUDENT_H


#include "Person.h"

class Student : Person {
    int number;

public:
    Student(const std::string &name, int age, int number);

    int getNumber();

    void PrintSelf();
};


#endif //C__PROJECT_STUDENT_H
