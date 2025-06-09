//
// Created by xiaoh on 2025/6/9.
//


#include <stdio.h>


//int main()
//{
//    int a = 10;
//    int* pa = &a;
//    // printf("%d\n", sizeof(pa)); // 64 位电脑 sizeof(pa) = 8
//    // printf("%d\n", sizeof(char));
//    // pa 是一个指针变量，用来存放地址的
//    // pa 的类型是 int*
//    // 本质上指针就是地址, 通过指针可以访问内存中的数据
//    /*
//     * char 1 byte
//     * int  4 byte
//     *
//     * */
//
//
//
//    return 0;
//
//}


//int main()
//{
//    char* pc = NULL;
//    short* ps = NULL;
//    int* pi = NULL;
//    double* pd = NULL;
//
//    printf("sizeof(char) = %d\n", sizeof(char));
//    printf("sizeof pc = %d\n", sizeof(pc));
//    printf("sizeof(short) = %d\n", sizeof(short));
//    printf("sizeof ps = %d\n", sizeof(ps));
//    printf("sizeof(int) = %d\n", sizeof(int));
//    printf("sizeof pi = %d\n", sizeof(pi));
//    printf("sizeof(double) = %d\n", sizeof(double));
//    printf("sizeof pd = %d\n", sizeof(pd));
//
//    return 0;
//}

//
//int main()
//{
//    int a = 0x11223344;
////    int* pa = &a;
////    *pa = 0;
//    char* pc = (char*)&a;
//    *pc = 0;
//    // 指针类型决定了指针在被解引用的时候访问几个字节
//    // 如果是int* 字节，解引用访问4个字节
//    // 如果是char* 字节，解引用访问1个字节
//
//    return 0;
//}

//
//int main()
//{
//    int a = 0x11223344;
//    int* pa = &a;
//    char* pc = (char*)&a;
//
//    printf("pa = %p\n", pa);
//    printf("pa = %p\n", pa + 1);
//    printf("pc = %p\n", pc);
//    printf("pc = %p\n", pc + 1);
//
//    // 结论2：指针类型决定了指针+1 -1操作的时候，跳过多少字节
//    return 0;
//}


int main()
{
    int a = 0;
    int* pi = &a;
     // pi解引用访问4个字节，pi+1也是跳过4个字节
     float* pf = (float*)&a;
     // int* 和 float*不通用
    return 0;
}