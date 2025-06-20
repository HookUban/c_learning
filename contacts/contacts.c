
#include "contacts.h"

// 静态版本
//void InitContact(Contact* pc)
//{
//    assert(pc);
//    pc->count = 0;
//    memset(pc->data, 0, sizeof(pc->data));
//
//}

void CheckCapacity(Contact* pc)
{
    if (pc->count >= pc->capacity)
    {
        printf("通讯录已满， 增加容量\n");
        PeoInfo* ptr = (PeoInfo*)realloc(pc->data, sizeof(PeoInfo) * (pc->capacity + INC_SZ));
        if (ptr == NULL)
        {
            printf("AddCount::%s\n", strerror(errno));
            return ;
        }
        else
        {
            pc->data = ptr;
            pc->capacity += INC_SZ;
            printf("增加容量成功\n");
        }

    }
}

void LoadContact(Contact* pc)
{
    assert(pc);
    FILE* pfRead = fopen("contact.txt", "rb");
    if (pfRead == NULL)
    {
        perror("LoadContact");
        return ;
    }
    PeoInfo tmp = {0};

    while(fread(&tmp, sizeof(PeoInfo), 1, pfRead) == 1)
    {
        CheckCapacity(pc);

        pc->data[pc->count] = tmp;
        pc->count++;
    }


    fclose(pfRead);
    pfRead = NULL;
}

// 动态版本
int InitContact(Contact* pc)
{
    assert(pc);
    pc->count = 0;
    pc->data = calloc(DEFAULT_SZ, sizeof(PeoInfo));

    if (pc->data == NULL)
    {
        printf("InitContact::%s\n", strerror(errno));
        return 1;
    }
    pc->capacity = DEFAULT_SZ;

    //  加载文件的信息到通讯录中
    LoadContact(pc);

    return 0;
}


void DestroyContact(Contact* pc)
{
    assert(pc);
    free(pc->data);
    pc->data = NULL;
    pc->count = 0;
}


// 静态版本
//void AddContact(Contact* pc)
//{
//    assert(pc);
//    if (pc->count == MAX)
//    {
//        printf("通讯录已满， 无法添加\n");
//        return ;
//    }
//
//    printf("请输入名字:>");
//    scanf("%s", pc->data[pc->count].name);
//    printf("请输入年龄:>");
//    scanf("%d", &(pc->data[pc->count].age));
//    printf("请输入性别:>");
//    scanf("%s", pc->data[pc->count].sex);
//    printf("请输入电话:>");
//    scanf("%s", pc->data[pc->count].tele);
//    printf("请输入地址:>");
//    scanf("%s", pc->data[pc->count].addr);
//
//    pc->count++;
//
//    printf("添加成功\n");
//
//}
// 动态版本



void AddContact(Contact* pc)
{
    assert(pc);
    // 增加容量
    CheckCapacity(pc);

    printf("请输入名字:>");
    scanf("%s", pc->data[pc->count].name);
    printf("请输入年龄:>");
    scanf("%d", &(pc->data[pc->count].age));
    printf("请输入性别:>");
    scanf("%s", pc->data[pc->count].sex);
    printf("请输入电话:>");
    scanf("%s", pc->data[pc->count].tele);
    printf("请输入地址:>");
    scanf("%s", pc->data[pc->count].addr);

    pc->count++;

    SaveContact(pc);
    printf("添加成功\n");

}

void ShowContact(const Contact* pc)
{
    assert(pc);

    int i = 0;
    printf("%-20s\t%-5s\t%-5s\t%-12s\t%-30s\n","名字", "年龄", "性别", "电话", "地址");
    for (i = 0; i < pc->count; i++)
    {
        printf("%-20s\t%-5d\t%-5s\t%-12s\t%-30s\n",
               pc->data[i].name,
               pc->data[i].age,
               pc->data[i].sex,
               pc->data[i].tele,
               pc->data[i].addr);

    }
}

static int FindByName(Contact* pc, char name[])
{
    assert(pc);

    int i = 0;
    for ( i = 0; i < pc->count; i++)
    {
        if (0 == strcmp(pc->data[i].name, name))
        {
            return i;
        }
    }
    return -1;
}

void DelContact(Contact* pc)
{
    char name[MAX_NAME] = {0};
    int i = 0;
    assert(pc);
    if (pc->count == 0)
    {
        printf("通讯录为空\n");
        return ;
    }

    printf("请输入要删除的名字:>");
    scanf("%s", name);
    // 删除
    // 1.查找
    int pos = FindByName(pc, name);
    if (pos == -1)
    {
        printf("要删除的人不存在\n");
        return ;
    }
    // 2.删除

    for (i = pos; i < pc->count-1; i++)
    {
        pc->data[i] = pc->data[i + 1];
    }
    pc->count--;
    printf("删除成功\n");

}



void SearchContact(const Contact* pc)
{
    assert(pc != NULL);
    char name[MAX_NAME] = {0};
    printf("请输入要查找的人的姓名：");
    scanf("%s", name);
    int i = FindByName(pc, name);
    if (i == -1)
    {
        printf("要查找的人不存在\n");
        return ;
    }
    printf("查找的人的信息为：\n");
    printf("%-20s\t%-5s\t%-5s\t%-12s\t%-30s\n","名字", "年龄", "性别", "电话", "地址");
    printf("%-20s\t%-5d\t%-5s\t%-12s\t%-30s\n",
               pc->data[i].name,
               pc->data[i].age,
               pc->data[i].sex,
               pc->data[i].tele,
               pc->data[i].addr);

}

void ModifyContact(Contact* pc)
{
    printf("请输入要修改的人的姓名：");
    char name[MAX_NAME];
    scanf("%s", name);
    int pos = FindByName(pc, name);
    if(pos == -1)
    {
        printf("没有找到该联系人！\n");
        return ;
    }
    printf("请输入新的联系人信息：\n");
    printf("姓名：");
    scanf("%s", pc->data[pos].name);
    printf("年龄：");
    scanf("%d", &pc->data[pos].age);
    printf("性别：");
    scanf("%s", pc->data[pos].sex);
    printf("电话：");
    scanf("%s", pc->data[pos].tele);
    printf("地址：");
    scanf("%s", pc->data[pos].addr);


}


int cmp_peo_by_name(const void* e1, const void* e2)
{
    return strcmp(((PeoInfo*)e1)->name, ((PeoInfo*)e2)->name);
}

void SortContact(Contact* pc)
{
    assert(pc);
    qsort(pc->data, pc->count, sizeof(PeoInfo), cmp_peo_by_name);
    printf("排序成功！\n");
    ShowContact(pc);
}


void SaveContact(const Contact* pc)
{
    assert(pc);
    FILE* pfWrite = fopen("contact.txt", "wb");
    if (pfWrite == NULL)
    {
        perror("SaveContact");
        return ;
    }

    // 写文件-二进制的形式
    int i = 0;
    for (i = 0; i < pc->count; i++)
    {
        fwrite(&pc->data[i], sizeof(PeoInfo), 1, pfWrite);
        printf("保存成功！\n");
    }


    fclose(pfWrite);
    pfWrite = NULL;
}