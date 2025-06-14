
#include <stdio.h>



//int main()
//{
//    int a[] = {1, 2, 3, 4};
//
//    printf("%d\n", sizeof(a));          // 16
//    printf("%d\n", sizeof(a+0));        // 64位平台8   32位平台4
//    // a不是单独放在sizeof内部，也没有取地址，所以a就是首元素的地址，a+0还是首元素的地址
//    printf("%d\n", sizeof(*a));         // 数组第一个值1类型大小int 4
//    printf("%d\n", sizeof(a+1));        //  64位平台8   32位平台4
//    printf("%d\n", sizeof(a[1]));       // 数组第二个值2类型大小int 4
//    printf("%d\n", sizeof(&a));         // 数组指针，64位平台8   32位平台4
//    printf("%d\n", sizeof(*&a));        // 数组的地址解引用，拿到了整个数组，16
//    printf("%d\n", sizeof(&a+1));       // 64位平台8   32位平台4
//    printf("%d\n", sizeof(&a[0]));      // 第一个元素地址，64位平台8   32位平台4
//    printf("%d\n", sizeof(&a[0]+1));    // 第二个元素地址， 64位平台8   32位平台4
//
//    return 0;
//}


//int main()
//{
//    char arr[] = {'a', 'b', 'c', 'd', 'e', 'f'};
//
//    printf("%d\n", sizeof(arr));            // 6,char类型大小1,整个数组6个char类型
//    printf("%d\n", sizeof(arr + 0));        // 首元素地址 64位平台8   32位平台4
//    printf("%d\n", sizeof(*arr));           // 首元素值 a，char类型大小1
//    printf("%d\n", sizeof(arr[1]));         // 第二个元素值 b，char类型大小1
//    printf("%d\n", sizeof(&arr));           //  数组指针，64位平台8   32位平台4
//    printf("%d\n", sizeof(&arr+1));         // 数组后的地址，64位平台8   32位平台4
//    printf("%d\n", sizeof(&arr[0] + 1));    // 第二个元素地址， 64位平台8   32位平台4
//
//    return 0;
//}
//#include <string.h>
//int main()
//{
//    char arr[] = {'a', 'b', 'c', 'd', 'e', 'f'};
//
//    printf("%d\n", strlen(arr));            // 未知，长度到'\0'结束
//    printf("%d\n", strlen(arr + 0));        // 随机值，长度到'\0'结束
////    printf("%d\n", strlen(*arr));           // strlen('a'), strlen(97), 野指针
////    printf("%d\n", strlen(arr[1]));         // strlen('b'), strlen(98), 野指针
//    printf("%d\n", strlen(&arr));           // 随机值，长度到'\0'结束
//    printf("%d\n", strlen(&arr+1));         // 随机值-6，长度到'\0'结束
//    printf("%d\n", strlen(&arr[0] + 1));    //随机值-1，长度到'\0'结束
//
//    return 0;
//}



//int main()
//{
//    char arr[] = "abcdef";
//    printf("%d\n", sizeof(arr));            // 7,char类型大小1,整个数组7个char类型
//    printf("%d\n", sizeof(arr + 0));        //  首元素地址 64位平台8   32位平台4
//    printf("%d\n", sizeof(*arr));           //  首元素值 a，char类型大小1
//    printf("%d\n", sizeof(arr[1]));         // 第二个元素值 b，char类型大小1
//    printf("%d\n", sizeof(&arr));           //  数组指针，64位平台8   32位平台4
//    printf("%d\n", sizeof(&arr+1));         // 数组后的地址，64位平台8   32位平台4
//    printf("%d\n", sizeof(&arr[0] +1));     // 第二个元素地址， 64位平台8   32位平台4
//
//    return 0;
//}



//#include <string.h>
//int main()
//{
//    char arr[] = "abcdef";
//    printf("%d\n", strlen(arr));            // 6,长度到'\0'结束
//    printf("%d\n", strlen(arr + 0));        // 6,长度到'\0'结束
////    printf("%d\n", strlen(*arr));           // err
////    printf("%d\n", strlen(arr[1]));         // err
//    printf("%d\n", strlen(&arr));           // 6,长度到'\0'结束
//    printf("%d\n", strlen(&arr+1));         // 随机值
//    printf("%d\n", strlen(&arr[0] +1));     // 5,长度到'\0'结束
//
//    return 0;
//}


#include <string.h>

//
//int main()
//{
//
//    char* p = "abcdef";
//    printf("%d\n", sizeof(p));
//    printf("%d\n", sizeof(p));
//    printf("%d\n", sizeof(p));
//    printf("%d\n", sizeof(p));
//    printf("%d\n", sizeof(p));
//    printf("%d\n", sizeof(p));
//    printf("%d\n", sizeof(p));
//
//    printf("%d\n", strlen(p));
//    printf("%d\n", strlen(p));
//    printf("%d\n", strlen(p));
//    printf("%d\n", strlen(p));
//    printf("%d\n", strlen(p));
//    printf("%d\n", strlen(p));
//    printf("%d\n", strlen(p));
//
//    return 0;
//}


int main()
{

    int a[3][4] = {0};

    printf("%d\n", sizeof(a));
    printf("%d\n", sizeof(a[0][0]));
    printf("%d\n", sizeof(a[0]));
    printf("%d\n", sizeof(a[0] + 1));
    printf("%d\n", sizeof((*a[0]+1)));
    printf("%d\n", sizeof(a + 1));
    printf("%d\n", sizeof(*(a+1)));
    printf("%d\n", sizeof(&a[0]+1));
    printf("%d\n", sizeof(*(&a[0]+1)));
    printf("%d\n", sizeof(*a));
    printf("%d\n", sizeof(a[3]));


    return 0;
}