#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//int main(void) {
//
//    int a = 10;     // 四个字节
//    int arr[10];    // 40个字节
//    // 开辟的内存空间是不变的
//
//    return 0;
//}



//int main()
//{
//    // 动态内存管理   malloc, calloc, realloc, free
//
//    int arr[10] = {0};
//    // 动态内存开辟
//    int* p = (int*)malloc(40);
//    if (p == NULL)
//    {
//        printf("%s\n", strerror(errno));
//        return 1;
//    }
//    // 使用
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        *(p + i) = i;
//    }
//
//    for (i = 0; i < 10; i++)
//    {
//        printf("%d\n", *(p + i));
//    }
//
//    // 没有free
//    // 当程序退出的时候，系统会自动回收内存空间的
//
//    free(p);
//    p = NULL;
//
//    return 0;
//}

// free 只能释放动态开辟的内存空间

//
//int main()
//{
//    int* p = (int*)calloc(10, sizeof(int));
////    int* p = (int*)malloc(40);
//    if (p == NULL)
//    {
//        printf("%s\n", strerror(errno));
//        return 1;
//    }
//
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        printf("%d\n", *(p + i));
//    }
//
//    free(p);
//    p = NULL;
//}
//
//

// realloc 函数
// void* realloc(void* ptr, size_t size);
// ptr: 指向动态内存的指针
// size: 指定新的动态内存的大小

int main()
{
    int* p = (int*)malloc(10 * sizeof(int));

    if (p == NULL)
    {
        printf("%s\n", strerror(errno));

        return 1;
    }

    printf("p = %p\n", p);
    int i = 0;
    for (i = 0; i < 10; i++)
    {
        *(p + i) = i+1;
    }


    int* ptr = (int*)realloc(p, 20 * sizeof(int));

    printf("ptr = %p\n", ptr);
    if (ptr != NULL)
    {
        p = ptr;
    }

    for (i = 0; i < 20; i++)
    {
        printf("%d ", *(p + i));
    }
    printf("\n");
    printf("p = %p\n", p);

    free(p);
    p = NULL;
    return 0;
}