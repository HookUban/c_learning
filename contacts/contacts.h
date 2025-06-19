
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


// 类型的声明
typedef  struct PeoInfo
{
    char name[20];
    int age;
    char sex[10];
    char tele[12];
    char addr[30];

} PeoInfo;


// 通讯录
typedef struct Contact
{
    PeoInfo data[100];  // 存放人的信息
    int count;          // 记录当前通讯录中实际人的个数
} Contact;


void InitContact(Contact* pc);

#endif //CONTACTS_CONTACTS_H
