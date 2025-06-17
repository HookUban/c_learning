
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

//int main()
//{
////    char email1[] = {"zpw@bit.edu.cn"};
//////    char email1[] = {"zpw@bi.com"};
////
////    if (my_strstr(email1, "@bit.edu.cn") != NULL)
////    {
////        printf("email is ok\n");
////    }
////    else
////    {
////        printf("email is error\n");
////    }
//
//    char arr1[] = "abbbbbcdef";
//    char arr2[] = "bb";
//    char* ret = my_strstr(arr1, arr2);
//    if (ret == NULL)
//    {
//        printf("子串不存在\n");
//    }
//    else
//    {
//        printf("%s\n", ret);
//    }
//
//    return 0;
//}

// strtok 切割字符串

//int main()
//{
//    const char* sep = "@.";
//    char email[] = "zpw@bit.com";
//
//    char cp[30] = {0};
//    strcpy(cp, email);
//
//    char* ret = strtok(cp, sep);
//    while (ret != NULL)
//    {
//        printf("%s\n", ret);
//        ret = strtok(NULL, sep);
//    }
//    return 0;
//}

// strerror



//int main()
//{
//
//    printf("%s\n", strerror(0));
//    printf("%s\n", strerror(1));
//    printf("%s\n", strerror(2));
//    printf("%s\n", strerror(3));
//    printf("%s\n", strerror(4));
//    return 0;
//}
#include <errno.h>

//int main()
//{
//    FILE* pf = fopen("test.txt", "r");
//    if (pf == NULL)
//    {
//        printf("%s\n", strerror(errno));
//    }
//
//    return 0;
//}

#include <ctype.h>

//int main()
//{
//
////    int a = isspace(' ');
////    printf("%d\n", a);
////
////    int a = isdigit('a');
////    printf("%d\n", a);
//
//    printf("%c\n", tolower('A'));
//    return 0;
//}

void my_memcpy(void* dest, const void* src, size_t num)
{
    assert(dest && src);

    void* ret = dest;
    while(num--)
    {
        *(char*)dest = *(char*)src;
        dest = (char*)dest + 1;
        src = (char*)src + 1;
    }


}

//int main()
//{
//    // memcpy 内存copy
//    int arr1[] = {1, 2, 3, 4, 5};
//    int arr2[10] = {0};
//
//    my_memcpy(arr2, arr1, sizeof(arr1));
//
//    return 0;
//}