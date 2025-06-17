


// memmove用来处理重叠的情况

#include <stdio.h>

#include <string.h>
#include <assert.h>



void* my_memove(void* dest, const void* src, size_t num)
{
    assert(dest && src);

    void* ret = dest;
    if (dest < src)
    {
        // 前 -》 后
        while(num--)
        {
            *(char*)dest = *(char*)src;
            dest = (char*) + 1;
            src = (char*)src + 1;

        }
    }
    else
    {
        while (num--)
        {
            *((char*)dest+num) = *((char*)src + num);
        }
    }
    return ret;
}

void test2()
{

    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//    memmove(arr1+2, arr1, 20);
    my_memove(arr1, arr1+2, 20);
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr1[i]);
    }
}

//int main()
//{
//    test2();
//
//    return 0;
//}

//int main()
//{
//    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//    int arr2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//
//    int ret = memcmp(arr1, arr2, 12);
//    printf("%d\n", ret);
//}


int main()
{
    char arr1[] = "abcdefg";
    memset(arr1 + 5, 'x', 2);
    printf("%s\n", arr1);

    return 0;
}