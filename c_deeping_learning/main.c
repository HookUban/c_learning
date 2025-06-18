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

//int Add(int x, int y)
//{
//    return x+y;
//}
//
//
//int main()
//{
//
//    int arr[5] = {0};
//    int (*p)[5] = &arr; // 数组指针
//
//    printf("%p\n", &Add);
//    printf("%p\n", Add);
//
//
//    int (*pf)(int , int) = &Add;
//
//    int ret = (*pf)(1, 2);
//    printf("%d\n", ret);
//
//    return 0;
//}


//int main()
//{
//
//  ( *( void (*)())0 )();
//
//    return 0;




//typedef void (* pf_t)(int); // 把void(*)(int) 类型重命名为pf_t
//
//int main()
//{
//
//    void (* signal(int, void(*)(int)))(int);
//    pf_t signal(int, pf_t);
//
//
//}



//int Add(int x, int y)
//{
//    return x + y;
//}
//
//int Sub(int x, int y)
//{
//    return x - y;
//}
//
//int Mul(int x, int y)
//{
//    return x * y;
//}
//
//int Div(int x, int y)
//{
//    return x / y;
//}
//
//
//void calc (int (*pf)(int, int))
//{
//    int x = 0;
//    int y = 0;
//    int ret = 0;
//
//    printf("请输入两个数字:>");
//    scanf("%d %d", &x, &y);
//    ret = pf(x, y);
//    printf("%d\n", ret);
//
//}

//void menu()
//{
//    printf("*****************************\n");
//    printf("******1. add   2. sub *******\n");
//    printf("******3. mul   4. div *******\n");
//    printf("******0.  exit        *******\n");
//    printf("*****************************\n");
//}

//int main()
//{
//    setbuf(stdout, NULL);
//
//
//    int input = 0;
//
//
//    do
//    {
//        menu();
//
//        printf("请选择:>");
//        scanf("%d", &input);
//
//
//        switch (input)
//        {
//            case 1:
//                calc(Add);
//                break;
//            case 2:
//                calc(Sub);
//                break;
//            case 3:
//                calc(Mul);
//                break;
//            case 4:
//                calc(Div);
//                break;
//            case 0:
//
//                printf("退出程序\n");
//                input = 0;
//                break;
//
//            default:
//                printf("输入错误，请重新输入\n");
//        }
//    }
//    while (input);
//
//    return 0;
//}

//void menu()
//{
//    printf("*****************************\n");
//    printf("******1. add   2. sub *******\n");
//    printf("******3. mul   4. div *******\n");
//    printf("******0.  exit        *******\n");
//    printf("*****************************\n");
//}
//
//int Add(int x, int y)
//{
//    return x + y;
//}
//
//int Sub(int x, int y)
//{
//    return x - y;
//}
//
//int Mul(int x, int y)
//{
//    return x * y;
//}
//
//int Div(int x, int y)
//{
//    return x / y;
//}
//
////int main()
////{
////    int (*arr[4])(int, int) = {Add, Sub, Mul, Div};
////
////
////    int i = 0;
////    for (i = 0; i< 4; i++)
////    {
////        int ret = arr[i](8, 4);
////        printf("%d\n", ret);
////    }
////
////
////
////    return 0;
////}
//
//int main()
//{
//    setbuf(stdout, NULL);
//    int input = 0;
//    int x = 0;
//    int y = 0;
//    int ret = 0;
//    // 函数指针数组
//    // 转移表
//
//    int (*pfArr[5])(int, int) = {0, Add, Sub, Mul, Div};
//
//    do
//    {
//        menu();
//        printf("请选择:>");
//        scanf("%d", &input);
//
//        if (input == 0)
//        {
//            printf("退出程序\n");
//        }
//        else if(input >= 1 && input <= 4)
//        {
//            printf("请输入两个数字:>");
//            scanf("%d %d", &x, &y);
//            ret = pfArr[input](x, y);
//            printf("%d\n", ret);
//        }
//
//    }
//    while (input);
//
//    return 0;
//}



// 回调函数
/***************

int cmp(const void* e1, const void* e2)
{
    if (*(int*)e1 > *(int*) e2)
    {
        return 1;
    }
    else if(*(int*) e1 == *(int*) e1)
    {
        return 0;
    }
    else
    {
        return -1;
    }
}

void Swap(char* buf1, char* buf2, int width)
{
    int i = 0;
    for (i = 0; i < width; i++)
    {
        char tmp = *buf1;
        *buf1 = *buf2;
        *buf2 = tmp;

        buf1++;
        buf2++;
    }
}

void bubble_sort(void*base, int sz, int width, int(*cmp)(const void*e1, const void*e2))
{
    int i = 0;

    // 冒泡排序的趟数
    for (i = 0; i < sz - 1; i++)
    {
        // 一趟冒泡排序的过程
        int j = 0;
        for (j = 0; j < sz - 1 - i; j++)
        {
            if (cmp((char*)base+j*width, (char*)base + (j+1)*width))
            {
                // 交换
                Swap((char*)base+j*width, (char*)base + (j+1)*width, width);

            }

        }
    }
}



void tset1()
{
    int arr[] = {9, 8, 7, 6, 5, 4, 3, 2,1 ,0};
    // 把数组排成升序
    int sz = sizeof(arr) / sizeof(arr[0]);

//    bubble_sort(arr, sz);
//    qsort(arr, sz, sizeof(arr[0]), cmp);
    int i = 0;
    for (i = 0; i < sz; i++)
    {
        printf("%d ", arr[i]);
    }

}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Stu
{
    char name[20];
    int age;
};


int cmp_stu_by_name(const void* e1, const void* e2)
{
    return strcmp(((struct Stu*)e1)->name, ((struct Stu*) e2)->name);
}
int cmp_stu_by_age(const void* e1, const void* e2)
{
    return ((struct Stu*)e1)->age- ((struct Stu*) e2)->age;
}
void test2()
{

    // 测试使用qsort来排序结构数据

    struct Stu s[] = {{"zhangsan", 19}, {"lisi", 18}, {"wangwu", 10}};
    int sz = sizeof(s) / sizeof(s[0]);

//    qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
    qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
}

void tset3()
{
    int arr[] = {9, 8, 7, 6, 5, 4, 3, 2,1 ,0};
    // 把数组排成升序
    int sz = sizeof(arr) / sizeof(arr[0]);

//    bubble_sort(arr, sz);
    bubble_sort(arr, sz, sizeof(arr[0]), cmp);
    int i = 0;
    for (i = 0; i < sz; i++)
    {
        printf("%d ", arr[i]);
    }

}

void test4()
{

    // 测试使用qsort来排序结构数据

    struct Stu s[] = {{"zhangsan", 19}, {"lisi", 18}, {"wangwu", 10}};
    int sz = sizeof(s) / sizeof(s[0]);

//    qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
    bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_age);
    printf("fffffff");
}

//int main()
//{
////    tset3();
//
//    test4();
//
//    return 0;
//
//}
//



//int main()
//{
//
//    int arr[] = {9, 8, 7, 6, 5, 4, 3, 2,1 ,0};
//
//    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//    {
//        if (arr[i] & 0x01 == 1)
//        {
//            printf("%d ", arr[i]);
//        }
//    }
//
//    return 0;
//}

void right_rotate(char* arr, int sz, int k)
{
    int i= 0;
    for (i = 0; i < k; i++)
    {
        char tmp = arr[0];
        int j = 0;
        for (j = 0; j < sz - 1; j++)
        {
            arr[j] = arr[j+1];
        }
        arr[sz - 1] = tmp;
    }
}


//int main()
//{
//    char arr[] = "abcdef";
//    int k = 3;
//
//    int sz = sizeof(arr) / sizeof(arr[0]) - 1;
//
//    right_rotate(arr, sz, k);
//
//    printf("%s\n", arr);
//    return 0;
//}



struct Point {
    int x;
    int y;
};
struct Point find_num(int arr[3][3], int r, int c, int num)
{
    int x = 0;
    int y = c - 1;

    struct Point p = {-1, -1};
    while (x < r - 1 && y >= 0)
    {
        if (num < arr[x][y])
        {
            y--;
        }
        else if(num > arr[x][y])
        {
            x++;
        }
        else
        {
            p.x = x;
            p.y=  y;
            return p;
        }
    }
    return p;

}


//int main()
//{
//    int arr[3][3] = {1, 2, 3, 4, 5, 6,7, 8, 9};
//
//    int k = 0;
//
//    scanf("%d", &k);
//
//    struct Point ret = find_num(arr, 3, 3, k);
//    printf("%d %d\n", ret.x, ret.y);
//
//    return 0;
//}

*******************/


