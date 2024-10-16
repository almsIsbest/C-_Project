//
// Created by k'k'k on 2024/9/25.
//
#include <iostream>
#include "Person.h"
Person::Person(const std::string &name, int age) : name(name), age(age) {
    std::cout << "Person::Person(const std::string &name, int age)" << std::endl;
}

Person::Person(int age): name("默认") , age(age) {

}

std::string Person::getName() {
//    std::cout << &name << std::endl;
    return name;
}

int Person::getAge() const {
//    std::cout << &age << std::endl;
    return age;
}

Person::~Person() {
    std::cout << "Person::~Person()" << std::endl;
}

void Person::PrintSelf() {
    std::cout << name << " : " << age << std::endl;
}

int Person::operator+(int num) {
    this->age += num;
    return this->age;
}

Person operator + (int& num , const Person& person){
    return Person(person.age+num);
}

std::ostream& operator<<(std::ostream& out, const Person& person) {
    out << "Name: " << person.name << ", Age: " << person.age;
    return out;
}
