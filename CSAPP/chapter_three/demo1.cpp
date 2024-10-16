//
// Created by Betta on 2022/5/13.
//
#include <stdio.h>
#include <cstring>
#include <vector>
#include <memory>
#include <thread>
#include "iostream"
#include "Person.h"
#include "Student.h"
#include "Log.h"
#include "Best.h"
#define MAX(a, b) add(a , b ,5)
using namespace std;
#define N 10
using ARRAYOF5int = int[5];
typedef int  arrInt5[5];
int ArrayTest();

void cinTest();

void PointerTest();

void log(const char *msg){
    cout << msg<< 8888 << endl;
}

void exchange(int* pa,int* pb) {
    int temp{*pa};
    *pa = *pb;
    *pb = temp;
}
void f(int (*p)[3]) {

    cout <<  " p : " << p <<endl;
    cout <<  " *p : " << *p <<endl;

    for(int i = 0; i < 2; ++i){
        for(int j = 0; j < 3; ++j){
            cout << "地址 : "<< *(p + i) + j<<"值 : " << *(*(p + i ) +j)<< endl;
        }

    }
    cout << sizeof(*p) << endl;
}
//
//struct Student{
//    int id;
//    char name[20];
//};

//void printStudent(Student *p){
//    cout << p->id << " " << p->name << endl;
//}
/* 结构体定义 */
//struct String {
//    char * str;
//
//    String (const char* initValue ){
//        len = std::strlen(initValue);
//        str = new char [len +1];
//        std::strcpy(str, initValue);
//    }
//
//    int length(){
//        return len;
//    }
//
//    void assign(const String &str){
//        len = std::strlen(str.str);
//        delete [] this->str;
//        this->str = new char [len +1];
//        std::strcpy(this->str, str.str);
//    }
//
//private:
//    int len;
//
//};


//class String{
//public:
//    char * str;
//
//    char operator[](unsigned pos){
//        return str[pos];
//    }
//
//    char* operator + (const String &str){
//        if(this == &str){
//            return this->str;
//        }
//        int len = strlen(this -> str) + strlen(str.str);
//        char * newStr = new char[len];
//
//        strcpy(newStr, this -> str);
//        strcpy(newStr + strlen(this -> str),   str.str);
//        delete[] this -> str;
//        this -> str = newStr;
//        return this->str;
//    }
//};


class String {
private:
    unsigned len;

public:
    char* str;

    String() {
        len = 0;
        str = new char[1]{'\0'};
    }
    String(const String& initVal) {
        len = initVal.len;
        str = new char[len + 1];
        for (unsigned i{0}; i <= len; i++)
            str[i] = initVal.str[i];
    }
    String(const char* initVal) {
        len = std::strlen(initVal);
        str = new char[len + 1];
        for (unsigned i{0}; i <= len; i++)
            str[i] = initVal[i];
    }
    String(unsigned num, char c) {
        len = num;
        str = new char[num + 1];
        for (unsigned i{0}; i <= num; i++)
            str[i] = c;
        str[num] = '\0';
    }
    ~String() {
        delete[] str;
    }

    char operator[](unsigned pos) {
        return str[pos];
    }
    String operator+(const String& b) {
        char* newstr{new char[len + b.len + 1]};
        std::strcpy(newstr, str);
        std::strcpy(newstr + len, b.str);
        String result(newstr);
        delete[] newstr;
        return result;
    }
    String& operator+=(const String& b) {
        String result(operator+(b)); //
        operator=(result);
        return *this;
    }
    String& operator=(const String& assignVal) {
        if (str == assignVal.str) return *this;
        delete[] str;
        len = assignVal.len ;
        str = new char[len + 1];
        for (unsigned i{0}; i < len + 1; i++) {
            str[i] = assignVal.str[i];
        }
        return *this;
    }
    explicit operator bool() {
        if (len == 0) return false;
        else return true;
    }

    unsigned length() {
        return len;
    }
};


class Base {
public:
    Base() {
        std::cout << "Base constructor" << std::endl;
    }
    ~Base() {
        std::cout << "Base destructor" << std::endl;
    }
};
class Member {
public:
    Member() {
        std::cout << "Member constructor" << std::endl;
    }
    ~Member() {
        std::cout << "Member destructor" << std::endl;
    }
};
class Derived : public Base {
    Member member;
public:
    Derived() {
        std::cout << "Derived constructor" << std::endl;
    }
    ~Derived() {
        std::cout << "Derived destructor" << std::endl;
    }
};

template<typename T , typename U>
T add( T a , U b  ){
    return a + b;
}

int plusTwo(int a, int b);
int (*p)(int , int);

int main() {
//    int a{2} ,b{3} ;
//    exchange(&a, &b);
//    cout << a << " " << b << endl;

//    int a[2][3]{{1,2,3},{4,5,6}};
//    cout << &a[1][0]<<endl;
//    f(a);

//    ARRAYOF5int a[4]{{1} ,{2}, {3} ,{4}};
//    ARRAYOF5int *p{&a[0]};
//    int length = sizeof (a) / sizeof (ARRAYOF5int);
//    for(int i = 0; i < length; ++i){
//        cout << *(p + i ) << endl;
//    }

//    Student A{1231, "Betta"} ;
//    cout << sizeof (A) <<endl;
//    printStudent(&A);

//    int* ptr{new int[4]};
//    int* p{nullptr} ;
//    cout << sizeof(int*) << endl;
//
//    enum class Direction {
//        East,
//        South,
//        West,
//        North
//    };
//    Direction d{Direction::East};
//    d = Direction::North;

//    String a{"hello"} , b{"hi"};
//    cout <<a.length()<< endl;
//    cout << b.length()<< endl;
//    b.assign(a);
//    cout<< b.str<< endl;

//    String str ;
//    str.str = new char[6]{"hello"};
//    String str2;
//    str2.str = new char[6]{"world"};
//    cout<< str + str2 << endl;


//    String str = String("hello");
//    String str2 = String("world");
//
//    str +=str2;
//    cout << str.str << endl;
//
//
//    String* str3 = new String("hello");
//
//
//    int* a = new int[5];
//    int b[]{12,3,4,5,65};
//    int * p = b;
//    cout <<sizeof (&b[1]) << endl;

//    Person person = Person( "Betta" , 18);
//    cout << person.getName() << endl;
//    cout << person.getAge() << endl;
//    Student student = Student("alice" , 12 ,12312312);
//    student.PrintSelf();
//
//    Person p = Person("Betta", 12);
//    int a = 1;
////    a + person;
//    a + p;
//    std::cout << person.getAge() << endl;
//
//    log("hello ,Log");
//
//    testBest();
//
//    std::cout << p << endl;


    int a = 10, b = 20;

//    asm volatile ("xchgl %0, %1"    // 使用汇编指令 xchgl 交换两个寄存器的值 GCC 编译器默认使用 EAX 和 EDX 寄存器，所以这里需要指定输入和输出的寄存器**/
//            : "=r"(a), "=r"(b)  // 输出: 结果会存储到 a 和 b 中
//            : "0"(a), "1"(b)   // 输入: 将 a 和 b 分别存储到寄存器中
//            );

    std::cout << "a = " << a << ", b = " << b << std::endl;

    int value = 10;
    int & ref = value;

    p = plusTwo;

    cout<< (*p)(1,2);


}

int plusTwo(int a, int b){
    return a + b;
}


int ArrayTest() {
    char a[]{'h', 'o', 'l', 'l', 'e', '\0'}; // 这里
    for (int i{0}; i < 5; i++) {
        cout << a[i];
        if (i != 4) {
            cout << ",";
        }
    }
    char b[sizeof(a)]{};
    for (int i = 0; i < sizeof(a); ++i) {
        b[i] = a[i];
    }
    cout << sizeof(a) << endl;
    cout << a << endl;

    cout << b;
}

void cinTest() {
//    char a[30]{};
//    char b[30]{};
//    cin.get(a, 10);      // 设置最大长度为 10，默认终止字符为换行 '\n'
//    cin.get(b, 30, 'r'); // 设置终止字符为 'r'
//    cout << a << endl;
//    cout << b << endl;

    /**遇到空格会被截断**/
    int h;
    cin >> h;
    cout << h << endl;


    /**
     * 遇到结束符，会被存放到缓存中不被拿出来，等下一次终止字符还是一样那么相当于遇到空格
     * 终止字符被吃掉从缓存中拿出来了但是不会显示任何
     **/
    char a[30]{};
    char b[30]{};
    cin.get(a, 30, '!');
    cin.get(b, 30, '!');
    cout << "a is: " << a << endl;
    cout << "b is: " << b << endl;


}

void PointerTest() {
    int c{765};
    int *address{&c};
    cout << &c << endl;
    cout << *address << endl;
    (*address) = 43;
    cout << c << endl;
    cout << &*address << endl;
    cout << &++c << endl;
    cout << c++  << endl;
    cout << address << endl;
}
