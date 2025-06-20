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

//int main()
//{
//
//    struct S s = {0};
//
//    // 以二进制的方式读文件
//    FILE* pf = fopen("test.txt", "rb");
//    if (pf == NULL)
//    {
//        perror("fopen");
//        return 1;
//    }
//
//    fread(&s, sizeof(s), 1, pf);
//
//    printf("%s %d %f", s.name, s.age, s.score);
//
//    fclose(pf);
//    pf = NULL;
//    return 0;
//}

//int main()
//{
//    struct S s = {"zhangsan", 20, 50.9f};
//    struct S tmp = {0};
//    char buf[100] = {0};
//
//    // 把s中格式化数据转化成字符串放到buf中
//    sprintf(buf, "%s %d %f", s.name, s.age ,s.score);
//    printf("字符串：%s\n", buf);
//
//    // 从字符串buf中获取一个格式化的数据到tmp中
//    sscanf(buf, "%s %d %f", tmp.name, &tmp.age, &tmp.score);
//    printf("格式化：%s %d %f\n", tmp.name, tmp.age, tmp.score);
//
//
//}

/*
int main()
{
    FILE* pf = fopen("test.txt", "r");
    if (pf == NULL)
    {
        printf("%s\n", strerror(errno));
        return 1;
    }
    // 读文件
//    int ch = fgetc(pf);
//    printf("%c\n", ch);

    // 定位文件指针
    fseek(pf, 2, SEEK_SET);
    int ch = fgetc(pf);
    printf("%c\n", ch);



    fclose(pf);
    pf = NULL;
    return 0;
}*/
//int main()
//{
//    int a = 10000;
//    FILE* pf = fopen("test.txt", "wb");
//    fwrite(&a, 4, 1, pf);
//    fclose(pf);
//    pf = NULL;
//
//    return 0;
//}

#include <windows.h>


/*
int main()
{
    setbuf(stdout, NULL);
    FILE* pf = fopen("test.txt", "w");
    fputs("abcdef", pf);        // 先将代码放在输出缓冲区
    printf("睡眠10秒-已经写数据了，打开test.txt文件，发现文件没有内容\n");
    Sleep(10000);
    printf("刷新缓冲区\n");
    fflush(pf);     // 刷新缓冲区时，才将输出缓冲区的数据写到文件（磁盘）
    // fflush在高版本的vs上不能使用了
    printf("再睡眠10秒-此时，再次打开test.txt文件，文件有内容了\n");
    Sleep(10000);
    fclose(pf);
    pf = NULL;
    return 0;


}*/

#define QUARE(x)  ((x)*(x))

int main()
{
#include <stdio.h>
//    int t = QUARE(5);
    int t = QUARE(5+1);
    printf("%d\n", t);
    return 0;
}
