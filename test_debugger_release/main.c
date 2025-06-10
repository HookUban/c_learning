#include <stdio.h>

//int main(void) {
//
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        printf("%d\n", i);
//    }
//    return 0;
//}

//
//int main()
//{
//    int i = 0;
//    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//    for (i  = 0; i < 13; i++)
//    {
//        arr[i] = 0;
//        printf("%d\n", arr[i]);
//    }
//}

#include <stdio.h>
#include <assert.h>


char* my_strcpy(char* dest, const char* src)
{
    char* ret = dest;
    assert(src != NULL);
    assert(dest != NULL);

    while (*dest++ = *src++)
    {};
    return ret;
}

int main()
{
    char arr1[20] = "xxxxxxxxxxx";
    char arr2[] = "hello bit";

    my_strcpy(arr1, arr2);

    printf("%s\n", my_strcpy(arr1, arr2));

    return 0;
}