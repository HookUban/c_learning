#include <stdio.h>

//int main()
//{
//    FILE* pf = fopen("test.txt", "W");
//
//
//    fclose(pf);
//    pf = NULL;
//
//    return 0;
//}

#include <stdlib.h>
#include <string.h>
#include <error.h>


//int main()
//{
//    FILE *pf = fopen("test.txt", "r");
//    if (pf == NULL)
//    {
//        printf("%s\n", strerror(errno));
//        return 1;
//    }
//
///*    // 写文件
//    char i = 0;
//    for (i = 'a'; i <= 'z'; i++)
//    {
//        fputc(i, pf);
//        fputc('\n', pf);
//    }*/
//    // 读文件
//    int ch = 0;
//
//    while ((ch = fgetc(pf)) != EOF)
//    {
//        printf("%c", ch);
//
//    }
//    // 关闭文件
//    fclose(pf);
//    pf = NULL;
//
//    return 0;
//}

/*

int main()
{
    FILE *pf = fopen("test.txt", "r");
    if (pf == NULL)
    {
//        printf("%s\n", strerror(errno));
        perror("fopen");
        return 1;
    }

    // 写一行数据
//    fputs("fuck shangke", pf);
    // 读一行数据
    char* buf = (char*)malloc(20);

        fgets(buf, 20, pf);
        printf("%s", buf);
    // 关闭文件
    fclose(pf);

    pf = NULL;

    return 0;
}*/
/*

struct S
{
    char arr[10];
    int age;
    float score;
};

*/


/*
int main()
{
    struct S s = {"zhangsan", 25, 50.5f};


    FILE* pf = fopen("test.txt", "w");
    if (pf == NULL)
    {
        perror("fopen");
        return 1;
    }

//    fprintf(pf,"%s %d %f", s.arr, s.age, s.score);

    fscanf(pf, "%s %d %f", s.arr, &s.age, &s.score);
    printf("%s %d %f", s.arr, s.age, s.score);



    fclose(pf);
    pf = NULL;

    return 0;

}*/



struct S
{
    char name[20];
    int age;
    float score;
};

/*
int main()
{
    struct S s = {"zhangsan", 24, 50.5f};
    FILE* pf = fopen("test.txt", "wb");

    if (pf == NULL)
    {
        perror("fopne");
        return 1;
    }

    // 二进制的方式写
    fwrite(&s, sizeof(s), 1, pf);

    fclose(pf);
    pf = NULL;

    return 0;
}*/

int main()
{

    struct S s = {0};

    // 以二进制的方式读文件
    FILE* pf = fopen("test.txt", "rb");
    if (pf == NULL)
    {
        perror("fopen");
        return 1;
    }

    fread(&s, sizeof(s), 1, pf);

    printf("%s %d %f", s.name, s.age, s.score);

    fclose(pf);
    pf = NULL;
    return 0;
}