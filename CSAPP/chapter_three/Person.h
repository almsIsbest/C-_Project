//
// Created by k'k'k on 2024/9/25.
//

#ifndef C__PROJECT_PERSON_H
#define C__PROJECT_PERSON_H


#include <string>

class Person {
    std::string name;
    int age;
public:
    Person(int age);
    Person(const std::string &name, int age);
    ~Person();

    std::string getName();
    int getAge() const;
    virtual void PrintSelf();
    int operator +(int num);
    friend Person operator + (int& num , const Person& person);
    friend std::ostream& operator << (std::ostream& out, const Person& person);
};


#endif //C__PROJECT_PERSON_H
