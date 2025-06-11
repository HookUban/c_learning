

#include <stdio.h>


enum Sex
{
    MALE,
    FEMALE,
    OTHER
};

struct Student
{
    char name[20];
    int age;
    char sex[1];
    float grade;

};

void my_print(const struct Student *stu)
{
    printf("Name: %s, Age: %d, Grade: %.2f\n", stu->name, stu->age, stu->grade);
    printf("%s\n", stu->sex);
}


void my_print2(struct Student stu)
{
    printf("Name: %s, Age: %d, Grade: %.2f\n", stu.name, stu.age, stu.grade);
    printf("%s\n", stu.sex);
}

int main()
{
    struct Student stu = {"Tom", 18, MALE, 90.5};
    my_print(&stu);
    my_print2(stu);
    return 0;
}



