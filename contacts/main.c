#include <stdio.h>
#include "contacts.h"



void menu()
{
    printf("******************************");
    printf("***** 1.add        2.del *****");
    printf("***** 3.search     4.modify **");
    printf("***** 5.show       6.sort  ***");
    printf("***** 0.exit               ***");
    printf("******************************");
}


int main(void) {

    setbuf(stdout, NULL);

    int input = 0;

    Contact con; // 通讯录
    // 初始化通讯录
    InitContact(&con);

    do
    {
        menu();
        printf("请选择:>");
        scanf("%d", &input);
        switch(input)
        {
            case 1:
                printf("add\n");
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
            case 0:
                printf("退出通讯录\n");
                break;
            default:
                printf("选择错误\n");
                break;
        }


    }
    while(input);
    return 0;
}
