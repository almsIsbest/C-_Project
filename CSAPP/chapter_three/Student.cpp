//
// Created by k'k'k on 2024/9/25.
//

#include <iostream>
#include "Student.h"

int Student::getNumber(){
    return number;
}

Student::Student( const std::string &name, int age, int number) : Person(name, age) , number(number) {

}


void  Student::PrintSelf() {
    std::cout << "Student: " << this->getName() << " " << this->getAge() << " " << number << std::endl;

}