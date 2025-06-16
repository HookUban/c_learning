
/**
1. strlen
 2. strcpy
 3. strcat
 4. strcmp


 ***/

#include <string.h>
#include <stdio.h>


//
//int main()
//{
//    char arr[] = "abcdef";
//    char arr2[] = {'b', 'i', 't'};
//
////    int len = strlen(arr);
//    int len = strlen(arr2);     // 随机值
//
//    printf("len = %d\n", len);
//    return 0;
//}

#include <assert.h>

//size_t my_strlen(const char* str)
//{
//    assert(str != NULL);
//    size_t count = 0;
//
//    while (*str != '\0')
//    {
//        count++;
//        str++;
//    }
//    return count;
//}
//
//
//int main()
//{
//    char arr[] = "abcdef";
//
//    size_t n = my_strlen(arr);
//    printf("len = %d\n", n);
//
//    return 0;
//}

//
//int main()
//{
//    char name[20] = {0};
//
//    strcpy(name, "zhangsan");
//    printf("name = %s\n", name);
//
//    return 0;
//}


//char* my_strcpy(char* dest, const char* src)
//{
//    char* ret = dest;
//    assert(dest != NULL && src != NULL);
//
//    while (*dest++ = *src++)
//    {
//        ;
//    }
//    return ret;
//}
//char* my_strcat(char* dest, const char* src)
//{
//    char* ret = dest;
//    assert(dest != NULL && src != NULL);
//
//    while (*dest)
//    {
//        dest++;
//    }
//    while (*dest++ = *src++)
//    {
//        ;
//    }
//    return ret;
//}
//
////int main()
////{
////
////    char arr1[] = "abcdef";
////    char arr2[20] = {0};
////
////    printf("arr2 = %s\n",  my_strcpy(arr2, arr1));
////
////    return 0;
////}
//
//
//
//
////int main()
////{
////    char arr1[20] = "hello";
//////    strcat(arr1, "world");
//////    my_strcat(arr1, "world");
////    printf("arr1 = %s\n", my_strcat(arr1, "world"));
////
////    return 0;
////}
//int my_strcmp(const char* str1, const char* str2)
//{
//    assert(str1 != NULL && str2 != NULL);
//
//    while (*str1++ == *str2++)
//    {
//        if (*str1 == '\0')
//        {
//            return 0;
//        }
//
//    }
//    return *str1 - *str2;
//}


//int main()
//{
//    char arr1[20] = "zhangsaff";
//    char arr2[] = "zhangsafgg";
//    // 比较一下两个字符串是否相等
//    if (my_strcmp(arr1, arr2) == 0)
//    {
//        printf("arr1 = arr2\n");
//    }
//    else if(my_strcmp(arr1, arr2) > 0)
//    {
//        printf("arr1 > arr2\n");
//    }
//    else
//    {
//        printf("arr1 < arr2\n");
//    }
//    return 0;
//}


//int main()
//{
//    char arr[20] = "abcdef";
//    char arr2[] = "bit";
//    strncpy(arr, arr2, 2);
//    printf("arr = %s\n", arr);
//    return 0;
//}

//int main()
//
//{
//
//    char arr1[20] = "hello ";
//    char arr2[] = "world";
//
//    strncat(arr1, arr2, 2);
//    printf("arr1 = %s\n", arr1);
//
//    return 0;
//}

char* my_strstr(const char* str1, const char* str2)
{
    assert(str1 != NULL && str2!=NULL);
    const char* s1 = str1;
    const char* s2 = str2;
    const char* p = str1;
    while (*p)
    {
        s1 = p;
        s2 = str2;
        while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
        {
            s1++;
            s2++;
        }
        if (*s2 == '\0')
        {
            return p;
        }
        p++;
    }
    return NULL;
}

int main()
{
    char email1[] = {"zpw@bit.edu.cn"};
//    char email1[] = {"zpw@bi.com"};

    if (my_strstr(email1, "@bit.edu.cn") != NULL)
    {
        printf("email is ok\n");
    }
    else
    {
        printf("email is error\n");
    }

    return 0;
}