//
//
///**
//结构是一些值的集合， 这些值称为成员变量，结构的每个成员可以使不同类型的变量
//
//
// char
// short
// int long
// long long
// float
// double
//内置类型
//
// 复杂对象的描述就会使用到，结构体
//
// struct tag
// {
// member-list;
// } varible-list;
//
//
// **/
//
///***
////// 声明的结构体类型
////struct Person {
////    char name[20];
////    char tele[12];
////    char sex[5];
////    int high;
////};
//////}p1, p2;
////// p1,p2是全局变量
////
////typedef struct
////{
////    char name[20];
////}  per;
////
////int main()
////{
////
////    return 0;
////}***/
//#include <stdio.h>
//
//struct Person {
//    char name[20];
//    char tele[12];
//    char sex[5];
//    int high;
//};
//
//
//int main()
//{
//    struct Person p1 = {"张三", "123456", "男", 180};
//    printf("姓名:%s\n", p1.name);
//    return 0;
//}