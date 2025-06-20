
/**
 * 实现一个通讯录
 *
 * 人的信息：
 * 名字
 * 年龄
 * 性别
 * 电话
 * 地址
 *
 * 1. 存放100个人的信息
 * 2. 增加联系人
 * 3. 删除指定联系人
 * 4. 查找联系人
 * 5. 修改联系人
 * 6. 排序
 * 7. 显示联系人
 *
 *
 *
 *
 *
 * **/


#ifndef CONTACTS_CONTACTS_H
#define CONTACTS_CONTACTS_H


#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>

#define DEFAULT_SZ 3
#define INC_SZ 2
#define MAX 100
#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30

// 类型的声明
typedef  struct PeoInfo
{
    char name[MAX_NAME];
    int age;
    char sex[MAX_SEX];
    char tele[MAX_TELE];
    char addr[MAX_ADDR];

} PeoInfo;


// 静态版本

// 通讯录
//typedef struct Contact
//{
//    PeoInfo data[MAX];  // 存放人的信息
//    int count;          // 记录当前通讯录中实际人的个数
//} Contact;


// 动态版本
typedef struct Contact
{
    PeoInfo* data;  // 存放人的信息
    int count;          // 记录当前通讯录中实际人的个数
    int capacity;
} Contact;


// 初始化通讯录
int InitContact(Contact* pc);

// 销毁通讯录
void DestroyContact(Contact* pc);

// 添加联系人
void AddContact(Contact* pc);

// 打印通讯录中的信息
void ShowContact(const Contact* pc);


// 删除指定联系人
void DelContact(Contact* pc);

void SearchContact(const Contact* pc);

void ModifyContact(Contact* pc);

void SortContact(Contact* pc);

#endif //CONTACTS_CONTACTS_H
