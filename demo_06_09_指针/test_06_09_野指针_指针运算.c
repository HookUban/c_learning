//
//
//#include <stdio.h>
//#include <string.h>
////int main()
////{
//////    int* p;
//////    *p = 10; // 非法访问内存，这里的P就是野指针
////
////    return 0;
////}
////
////
////int main()
////{
////    int arr[10] = {0};
////    int* p = arr;
////
////    int i = 0;
////    for(i = 0; i <= 10; i++)
////    {
////        *p = i;
////        p++;
////    }
////    return 0;
////}
////
////
////int* test()
////{
////    int a = 10;
////    return &a;
////}
////
////int main()
////{
////
////    int*p = test();
////
////    return 0;
////}
////
////int main()
////{
//////    int a = 10;
//////    int* p = &a;
//////    *p = 20;
//////
//////    int* p2 = NULL;
//////    *p2 = 20; // err
//////
//////    int* p2 = NULL;
//////    if (p2 != NULL)
//////    {
//////        *p2 = 100;
//////    }
//////
//////    printf("%d\n", *p2);
////
////
////
////    return 0;
////}
////
//
////
////int* test()
////{
////    int a = 10;
////    return &a;
////}
////int main()
////{
////
////    int* p = test();
////    printf("%d\n", *p);
////    return 0;
////}
//
///*
// *
// * 1.指针初始化
// * 2.小心指针越界
// * 3.避免返回局部变量的地址
// *
// *
// *
// * */
//
///*
// *
// * 指针加减整数
// *
// *
// * */
////
////int main()
////{
////    int arr[10] = {0};
////
////    int i = 0;
////    int sz = sizeof(arr) / sizeof(arr[0]);
////
//////    for (i = 0; i < sz; i++)
//////    {
//////        arr[i] = 1;
//////    }
//////
//////    int* p = arr;
//////    for(i < 0; i < sz; i++)
//////    {
//////        *p = 1;
//////        p++;
//////    }
////    int* p = arr;
////    for(i < 0; i < sz; i++)
////    {
////        *(p + i) = 1;
////    }
////
////    for (i = 0; i < sz; i++)
////    {
////        printf("%d ", arr[i]);
////    }
////
////    return 0;
////}
//
//
//int my_strlen(char* str)
//{
//    char* start = str;
//    while (*str != '\0')
//    {
//        str++;
//    }
//    return str - start;
//}
//
//int main()
//{
//    int len = my_strlen("abcdef");
//    printf("%d\n", len);
//
//
//    return 0;
//}

#include <stdio.h>

//int main()
//{
//    int a = 10;
//
//    int* pa = &a; // pa是一个指针变量，一个一级指针变量
//    int** ppa = &pa;
//    printf("%d\n", a);
//    printf("%d\n", *pa);
//    printf("%d\n", **ppa);
//
//    return 0;
//
//}

// 指针数组
// 存放指针的数组就是指针数组

int main()
{
//    int a = 10;
//    int b = 20;
//    int c = 30;
////    int* pa = &a;
////    int* pb = &b;
////    int* pc = &c;
////
//    int* parr[10] = {&a, &b, &c};
//
//    for (int i = 0; i < 3; i++)
//    {
//        printf("%d\n", *parr[i]);
//    }
//    int arr[3][4] = {1, 2, 3, 4, 2, 3, 4, 5,3, 4, 5, 6};
//    int i = 0;
//    int j = 0;
//    for(i = 0; i < 3; i++)
//    {
//        for(j = 0; j < 4; j++)
//        {
//            printf("%d ", arr[i][j]);
//        }
//    }
    int arr1[4] = {1, 2, 3, 4};
    int arr2[4] = {2, 3, 4, 5};
    int arr3[4] = {3, 4, 5, 6};
    int* parr[3] = {arr1, arr2, arr3};
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            printf("%d ", *(parr[i] + j));
        }
        printf("\n");
    }
    return 0;
}