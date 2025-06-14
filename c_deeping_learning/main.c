//#include <stdio.h>
//
//int main(void) {
//    printf("Hello, World!\n");
//    return 0;
//}

/**
char 1
short 2
int 4
long 4/8
long long 8
float 4
double 8



char
    unsigned char
    signed char
short
     unsigned short
     signed short
int
    unsigned int
    signed int
long
    unsigned long
    signed long

 构造类型

数组类型
结构体类型
枚举类型
联合类型

**/


#include <stdio.h>

/***
 *
 *
 * 1.正的整数，原码、反码、补码相同
 * 2.负的整数，原码、反码、补码是需要计算的
 * 反码：原码的符号位不变，其他位按位取反
 * 补码：反码+1就是补码
 *
 *
 *
 *
 * **/

//
//int main()
//{
//    int a = 20;
//    int b = -10;
//
//    return 0;
//
//}


// 判断大小端

//int main()
//{
//
//    int a = 1;
//    if (*(char *)&a == 1)
//    {
//        printf("xiao\n");
//    }
//    else
//    {
//        printf("da\n");
//    }
//
//
//    return 0;
//}

//int main()
//{
//    char a = -1;
//    printf("%d\n", a);
//    unsigned char b = -1;
//    printf("%d\n", b);
//    return 0;
//}

//int main()
//{
//    char a = -128;
//    // 10000000 000000000 00000000 10000000
//    // 11111111 111111111 11111111 01111111
//    // 11111111 111111111 11111111 10000000
//    // 10000000 - a
//    // %u打印时，需要整形提升，
//    // 10000000 -> 11111111 11111111 1111111 100000000
//    printf("%u\n", a);  //11111111 11111111 1111111 100000000
//
//    return 0;
//}

//int main()
//{
//    char a = 128;
//    // 00000000 00000000 00000000 10000000   - 128
//    // 10000000 - char a
//    //
//
//    printf("&u\n", a);
//
//    return 0;
//}


//int main()
//{
//    int i = -20;
//    unsigned int j = 10;
//    printf("%d\n", i + j);
//    return 0;
//
//}

//int main()
//{
//    unsigned char i = 0;
//
//
//    for (i = 0; i <= 255; i++)
//    {
//        printf("%d\n", i);
//    }
//    return 0;
//}
//#include <string.h>
//
//int main()
//{
//    int len = strlen("abcdef");
//    printf("%d\n", len);
//
//
//
//}



// 字符指针
// 数组指针
// 指针数组

//int main()
//{
////    char ch = 'w';
////
////    char* pc = &ch;
////    printf("%c\n", ch);
////    *pc = 'x';
////
////    printf("%c\n", *pc);
//
////    char* p = "abcdef"; // 把字符串的首字符a的地址赋值给了p
////    printf("%s\n", p);
////
////    return 0;
//
////
////    int arr1[] = {1, 2, 3, 4, 5};
////    int arr2[] = {2, 3, 4, 5, 6};
////    int arr3[] = {3, 4, 5, 6, 7};
////
////    int* parr[3] = {arr1, arr2, arr3};
////
////    int i = 0;
////
////    printf("%d\n",  sizeof(arr1) / sizeof(arr1[0]));
////    for(i = 0; i < 3; i++)
////    {
////        int j = 0;
////
////        for (j = 0; j <5; j++)
////        {
////            printf("%d ", *(parr[i] + j));
////            printf("%d ", parr[i][j]);
////        }
////
////        printf("\n");
////    }
//
//
//    int *p1[10];        // p1是指针数组
//    int (*p2)[10];      // p2是数组指针
//
//    char* arr[5] = {0};
//    char* (*pc)[5];
//
//    return 0;
//}

//int main()
//{
//    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//    int (*p)[10] = &arr;
//
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    int i = 0;
//    for(i = 0; i < sz; i++)
//    {
//        printf("%d\n", *(*p+i));
//    }
//
//
//
//    return 0;
//}

//void print1(int arr[3][5], int r, int c)
//{
//    int i = 0;
//    for (i = 0; i < r; i++)
//    {
//        int j = 0;
//        for (j = 0; j < c; j++){
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//}
//
//void print2(int (*p)[5], int r, int c)
//{
//    int i = 0;
//    for (i = 0; i < r; i++)
//    {
//        int j = 0;
//        for(j = 0; j < c; j++)
//        {
////            printf("%d ", *(*(p+i)+j));
//            printf("%d ", p[i][j]);
//        }
//        printf("\n");
//
//    }
//}
//
//
//int main()
//{
//    int arr[3][5] = {1, 2, 3, 4, 5, 2, 3, 4, 5, 6, 3, 4, 5 ,6, 7};
//
//    print1(arr, 3, 5);
//    printf("\n");
//    print2(arr, 3, 5);
//
//    return 0;
//}


