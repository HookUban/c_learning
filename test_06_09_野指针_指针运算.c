

#include <stdio.h>

//int main()
//{
////    int* p;
////    *p = 10; // 非法访问内存，这里的P就是野指针
//
//    return 0;
//}
//
//
//int main()
//{
//    int arr[10] = {0};
//    int* p = arr;
//
//    int i = 0;
//    for(i = 0; i <= 10; i++)
//    {
//        *p = i;
//        p++;
//    }
//    return 0;
//}
//
//
//int* test()
//{
//    int a = 10;
//    return &a;
//}
//
//int main()
//{
//
//    int*p = test();
//
//    return 0;
//}
//
//int main()
//{
////    int a = 10;
////    int* p = &a;
////    *p = 20;
////
////    int* p2 = NULL;
////    *p2 = 20; // err
////
////    int* p2 = NULL;
////    if (p2 != NULL)
////    {
////        *p2 = 100;
////    }
////
////    printf("%d\n", *p2);
//
//
//
//    return 0;
//}
//

//
//int* test()
//{
//    int a = 10;
//    return &a;
//}
//int main()
//{
//
//    int* p = test();
//    printf("%d\n", *p);
//    return 0;
//}

/*
 *
 * 1.指针初始化
 * 2.小心指针越界
 * 3.避免返回局部变量的地址
 *
 *
 *
 * */

/*
 *
 * 指针加减整数
 *
 *
 * */

int main()
{
    int arr[10] = {0};

    int i = 0;
    int sz = sizeof(arr) / sizeof(arr[0]);

//    for (i = 0; i < sz; i++)
//    {
//        arr[i] = 1;
//    }
//
    int* p = arr;
    for(i < 0; i < sz; i++)
    {
        *p = 1;
        p++;
    }


    return 0;
}