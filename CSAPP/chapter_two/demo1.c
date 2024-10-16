//
// Created by Betta on 2022/5/9.
//
#include <stdio.h>
#include <string.h>

#define STR(s)     #s
#define CONS(a,b)  a##b

typedef unsigned char *byte_pointer;

float sum_length(float a[], unsigned length);

int strlonger(char *s, char *t);

void test_show_bytes(int val);

void show_int(int x);

void show_float(float x);

void show_pointer(void *x);

void show_bytes(byte_pointer start, size_t len);

void inplace_swap(int *x, int *y);

void reserve_array(int a[], int cnt);



int main() {
//    float a[] = {1.0, 2.0, 3.0, 4.0, 5.0};
//
//    sum_length(a, 0);
//    show_int(1);
//    show_float(1.0);
//    show_pointer('a');
//    test_show_bytes(12345);
//    const char *s = "abcdef";
//    show_bytes((byte_pointer)s,strlen(s));




//    char s[] = {""};
//    char t[] = {"aaaaaaaaaaaaaaaaaaaa"};
//    printf("strlonger 函数 长度 = %d", strlonger(s, t));

//    int h= 1 ,b=2;
//
//    int *x = &h;
//    int *y = &b;
//    printf("h 的地址 %0xp\n",&h);
//    printf("x指针保存的的地址 %0xp\n",x);
//    printf("x = %d ,y= %d\n",*x,*y);
//    inplace_swap(x,y);
//    printf("x = %d ,y= %d\n",*x,*y);
//
//    int a[] = {1,2,3,4,5};
//
//    int length = sizeof(a)/sizeof(a[0]);
//    int i = 0;
//    while(i<length){
//        printf("遍历数组 a[%d] = %d\t",i,a[i]);
//        i++;
//    }
//    printf("\n");
//    reserve_array( a ,  length);
//    i = 0;
//    while(i<length){
//        printf("遍历数组 a[%d] = %d\t",i,a[i]);
//        i++;
//    }

//    /**
//     * 练习题 2.12
//     */
//    int x = 0x87654321;
//    printf("最低有效字节 %#x\n",x&0x000000FF);
//    printf("除了最低有效字节外其他的都取补 , %#x\n",x^0xFFFFFF00);
//    printf("最低有效字节设置成全1，%#x\n ",x|0x000000FF);


//    int lval = 0xFEDCBA98 << 32;
//    int alval =  0xFEDCBA98 >> 4 ;
//    unsigned ulval = 0xFEDCBA98u >> 40;
//    printf("lval %x\n",lval);
//    printf("lval %x\n",alval);
//    printf("lval %x\n",ulval);


/* 输出字符串vck */
    printf("%s\n" ,STR(vck));

    /* 2e3 输出:2000 */
    printf("%d\n", CONS(2,3));
    return 0;




    return 0;
}

/**无符号和有符号数的隐式运算**/
float sum_length(float a[], unsigned length) {
    int i;
    float result = length - 1;
    printf("输出length -1 = %u ", length - 1);
    for (i = 0; i <= length - 1; i++) {
        result += 1;
    }
    return result;
}

int strlonger(char *s, char *t) {
    printf("strlen(s) %u\n", strlen(s));
    printf("strlen(t) %u\n", strlen(t));
    int result = strlen(s) - strlen(t) > 0;
    return strlen(s) - strlen(t) > 0;
}

void show_bytes(byte_pointer start, size_t len) {
    size_t i;
    for (i = 0; i < len; i++) {
        printf("%.2x\n", start[i]);
    }
    printf("\n");
}

void show_int(int x) {
    show_bytes((byte_pointer) &x, sizeof(int));
}

void show_float(float x) {
    show_bytes((byte_pointer) &x, sizeof(float));
}


void show_pointer(void *x) {
    show_bytes((byte_pointer) &x, sizeof(void *));
}


/**
 * 强制转换对字节顺序的影响
 * @param val
 */
void test_show_bytes(int val) {
    int ival = val;
    float fval = (float) ival;
    int *pval = &val;
    show_int(val);
    show_float(fval);
    show_pointer(pval);
}

/**
 * 数组两头对调
 */
void reserve_array(int a[], int cnt) {
    int first = 0;
    int last = cnt - 1;
    for (; first < last; first++, last--) {
        inplace_swap(&a[first], &a[last]);
    }
}

/**不创建空间来交换指针保存的值的地址来改变两个变量**/
void inplace_swap(int *x, int *y) {
    *y = *x ^ *y;
    *x = *x ^ *y;
    *y = *x ^ *y;
}

