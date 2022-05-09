//
// Created by Betta on 2022/5/9.
//

#include <stdio.h>
#include <string.h>

typedef unsigned char* byte_pointer;

float sum_length(float a[], unsigned length);

int strlonger(char *s, char *t);

void test_show_bytes(int val);

void show_int(int x);

void show_float(float x);

void show_pointer(void *x);

int main() {
    float a[] = {1.0, 2.0, 3.0, 4.0, 5.0};

//   sum_length(a,0);
//    show_int(1);
//    show_float(1.0);
//    show_pointer('a');
    test_show_bytes(12345);
//    char s[] = {""};
//    char t[] = {"aaaaaaaaaaaaaaaaaaaa"};
//    printf("strlonger 函数 长度 %d", strlonger(s, t));
    return 0;
}

float sum_length(float a[], unsigned length) {
    int i;
    float result = length - 1;
    printf("输出length %ld ", length - 1);
    for (i = 0; i <= length - 1; i++) {
        result += 1;
    }
    return result;
}

int strlonger(char *s, char *t) {
    printf("strlen(s) %ld\n", strlen(s));
    printf("strlen(t) %ld\n", strlen(t));
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

void test_show_bytes(int val) {
    int ival = val;
    float fval = (float) ival;
    int *pval = &val;
    show_int(val);
    show_float(fval);
    show_pointer(pval);
}