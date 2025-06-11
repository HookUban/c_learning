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

int main()
{
    char a = -1;
    printf("%d\n", a);
    unsigned char b = -1;
    printf("%d\n", b);
    return 0;
}