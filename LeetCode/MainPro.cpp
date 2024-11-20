//
// Created by k'k'k on 2024/10/16.
//

#include <vector>
#include <iostream>
#include "TwoSum.h"
#include "AssignCookies_Easy.h"
#include "TestSample.h"

struct Me {
    int a;
    int b;
    long c;
};

typedef Me des[256];

des gdt;

#define task \
    1,          \
    2,          \
    12381893    \



// 定义 TaskStruct 结构体，表示任务的信息
struct TaskStruct {
    int id;             // 任务 ID
    int priority;       // 优先级
    int state;          // 任务状态
    int signal;         // 信号信息
    int alarm;          // 报警时间
    int uid;            // 用户 ID
    Me  me;             //me
};

// 使用宏定义初始化 TaskStruct 的默认值
#define INIT_TASK \
{ \
    1,         /* id: 初始任务 ID 为 1 */ \
    15,        /* priority: 默认优先级为 15 */ \
    0,         /* state: 默认状态 */ \
    0,         /* signal: 无信号 */ \
    0,         /* alarm: 无报警时间 */ \
    1000,       /* uid: 默认用户 ID 为 1000 */ \
    {             \
      1,          \
      2,          \
      4,          \
      }\
}


#define __va_rounded_size(TYPE)  \
  (((sizeof (TYPE) + sizeof (int) - 1) / sizeof (int)) * sizeof (int))

typedef char* va_list;

#define va_arg(AP, TYPE)						\
 (AP += __va_rounded_size (TYPE),					\
  *((TYPE *) (AP - __va_rounded_size (TYPE))))

int main() {

//    test1();
//    test455();

//    test135();

    Me varMe{task};

    std::cout << varMe.a << std::endl;
    std::cout << varMe.b << std::endl;
    std::cout << varMe.c << std::endl;


    struct TaskStruct task1 = INIT_TASK;

    // 输出结构体的初始值
    printf("Task ID: %d\n", task1.id);
    printf("Task Priority: %d\n", task1.priority);
    printf("Task State: %d\n", task1.state);
    printf("Task Signal: %d\n", task1.signal);
    printf("Task Alarm: %d\n", task1.alarm);
    printf("Task UID: %d\n", task1.uid);
    printf("Task Me.a: %d\n", task1.me.a);
    printf("Task Me.b: %d\n", task1.me.b);
    printf("Task Me.c: %ld\n", task1.me.c);

    int a[10];


    printf("gdt , %p\n", gdt);
    printf("gdt , %p\n", (gdt + 4));


    printf("a , %p\n", a);
    printf("a , %p\n", (a + 1));


    ((sizeof (int ) + sizeof (int) - 1) / sizeof (int)) * sizeof (int);
    va_list h;
    va_arg(h, int);

    std::cout << __va_rounded_size(int);
}