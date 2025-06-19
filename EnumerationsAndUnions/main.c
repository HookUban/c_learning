#include <stdio.h>


enum Day
{
    Mon=1,
    Tues,
    Wed,
    Thurs,
    Fri,
    Sat,
    Sun
};



//int main(void) {
//
//    enum Day d = Fri;
//    printf("%d\n", Mon);
//    printf("%d\n", d);
//
//    return 0;
//}
//

// 联合（共用体）

union Un
{
    int a;
    char c;
};

int main()
{
//    union Un u;
//    u.a = 0x12345678;
//    u.c = 0x10;
//    printf("%d\n", sizeof(u));
//
//    printf("%p\n", &u);
//    printf("%p\n", &u.a);
//    printf("%p\n", &u.c);
    return 0;
}