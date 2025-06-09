//
// Created by xiaoh on 2025/6/4.
//

#include "game.h"
void menu()
{
    printf("*******************\n");
    printf("****1. play********\n");
    printf("****0. exit********\n");
    printf("*******************\n");

}

void game()
{
    char mine[ROWS][COLS] = {0};    // 存放布置好的雷的信息
    char show[ROWS][COLS] = {0};    // 存放排查出的雷的信息
    // 初始化数组的内容为指定的内容
    // mine数组在没有布置雷的时候都是'0'
    InitBoard(mine, ROWS, COLS, '0');
    // show数组在游戏开始时都是'*'
    InitBoard(show, ROWS, COLS, '*');

    // DisplayBoard(mine, ROW, COL);
    // 设置雷
    SetMine(mine, ROW, COL);
    DisplayBoard(show, ROW, COL);
    // DisplayBoard(mine, ROW, COL);
    // 排查雷
    FindMine(mine, show, ROW, COL);
}


int main()
{
    // 禁用标准输出的缓冲
    setvbuf(stdout, NULL, _IONBF, 0);

    // 禁用标准错误的缓冲
    setvbuf(stderr, NULL, _IONBF, 0);

    int input = 0;

    // 设置随机数的生成
    srand((unsigned int)time(NULL));

    do
    {
        menu();
        printf("请选择>");
        scanf("%d", &input);
        switch (input)
        {
            case 1:
                game();
                break;
            case 0:
                printf("退出游戏\n");
                break;
            default:
                printf("输入错误，请重新输入\n");
        }

    } while(input);

    return 0;
}