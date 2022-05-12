//
// Created by Betta on 2022/5/11.
//
#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len);

void printf_bin(short num);

int fun1(unsigned word);

int fun2(unsigned word);

int main() {
//    short x = 12345;
//    short mx = -x;
//    show_bytes((byte_pointer) &x , sizeof(short));
//    show_bytes((byte_pointer) &mx , sizeof(short ));
//    printf("x 二进制输出\t");
//    printf_bin(x);
//
//    printf("mx 二进制输出\t");
//   printf_bin(mx);


//    short  v = -12345;
//    unsigned short uv = (unsigned short ) v;
//    printf("v = %d , uv = %u\n",v,uv);
//    printf_bin(v);
//    printf_bin(uv);
//
//    unsigned u = 4294967295u;
//    int tu = (int) u;
//    printf("u=%u , tu = %d \n",u,tu);
//    printf_bin(u);
//    printf_bin(tu);

//    short sx = -12345;
//    printf_bin(12345);
//    unsigned short usx = sx;
//    int x = sx;
//    unsigned ux = usx;
//    printf("sx = %d \n", sx);
//    show_bytes((byte_pointer) &sx, sizeof(short));
//    printf("usx = %u \n", usx);
//    show_bytes((byte_pointer) &usx, sizeof(unsigned short));
//    printf("x = %d \n", x);
//    show_bytes((byte_pointer) &x, sizeof(int));
//    printf("ux = %u \n", ux);
//    show_bytes((byte_pointer) &ux, sizeof(unsigned));

    printf("fun1 = %x\n", fun1(0x00000076));
    printf("fun1 = %x\n", fun1(0x87654321));
    printf("fun1 = %x\n", fun1(0x000000c9));
    printf("fun1 = %x\n", fun1(0xedcba987));

    printf("fun2 = %x\n", fun2(0x00000076));
    printf("fun2 = %x\n", fun2(0x87654321));
    printf("fun2 = %x\n", fun2(0x000000c9));
    printf("fun2 = %x\n", fun2(0xedcba987));

}

void show_bytes(byte_pointer start, size_t len) {
    size_t i;
    for (i = 0; i < len; i++) {
        printf("值 %x，地址%p \n", start[i], &start[i]);
    }
    printf("\n");
}

/** 二进制格式输出**/
void printf_bin(short num) {
    int i, j, k;
    byte_pointer p = (byte_pointer) &num + 1;
    for (i = 0; i < 2; i++) {
        j = *(p - i);//取每个字节的首地址，从高位字节到低位字节，即p p-1 p-2 p-3地址处
        for (int k = 7; k >= 0; k--) {//处理每个字节的8个位，注意字节内部的二进制数是按照人的习惯存储！
            if (j & (1 << k))//1左移k位，与单前的字节内容j进行或运算，如k=7时，00000000&10000000=0 ->该字节的最高位为0
                printf("1");
            else
                printf("0");
        }
        printf("  ");
    }
    printf("\r\n");
}

int fun1(unsigned word) {
    return (int) ((word << 24) >> 24);
}

int fun2(unsigned word) {
    return (int) (word << 24) >> 24;
}