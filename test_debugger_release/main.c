

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
#include <string.h>

//
//char* my_strcpy(char* dest, const char* src)
//{
//    char* ret = dest;
//    assert(src != NULL);
//    assert(dest != NULL);
//
//    while (*dest++ = *src++)
//    {};
//    return ret;
//}

//int main()
//{
//    char arr1[20] = "xxxxxxxxxxx";
//    char arr2[] = "hello bit";
//
//    my_strcpy(arr1, arr2);
//
//    printf("%s\n", my_strcpy(arr1, arr2));
//
//    return 0;
//}

//
//int my_strlen(const char* str)
//{
//    assert(str != NULL);
//    int i = 0;
//    while (str[i] != '\0')
//    {
//        i++;
//    }
//    return i;
//}
//
//int main()
//{
//   char arr[] = "hello bit";
//
//   int i = 0;
////   for (i = 0; i < strlen(arr); i++)
////   {
////       printf("%c\n", arr[i]);
////   }
//    for (i = 0; i < strlen(arr); i++)
//    {
//        printf("%c\n", *(arr+i));
//    }
//}

char* reverse_str(char* str, int len)
{
    assert(str != NULL);
    int l = 0;
    int r = len - 1;

    while(l < r)
    {
        char temp = *(str+l);
        *(str+l++) = *(str+r);
        *(str+r--) = temp;
    }
    return str;
}


typedef struct
{
    int val;
    struct ListNode* next;
}ListNode;


int main()
{
    char arr[10001] = {0};
    gets(arr);
    int len = strlen(arr);
    char* ret = reverse_str(arr, len);

    printf("%s\n", arr);
    return 0;
}