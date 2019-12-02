#include<stdio.h>

struct student{
    char* name;
    char* num;
    int age;
    char* gender;
    float score;
}stu1, stu2, *p1, *p2;

void getstu(struct student *p1){
    printf("Name: %s\n", p1->name);
    printf("Age: %d\n", p1->age);
    printf("Gender: %s\n", p1->gender);
    printf("ID: %s\n", p1->num);
    printf("Score: %.1f\n", p1->score);
}

int main(){
    struct student *p1 = &stu1;
    struct student *p2 = &stu2;
    p1->name = "Zijian Xie";
    p1->age = 23;
    p1->gender = "male";
    p1->num = "191AEB003";
    p1->score = 98.5;
    getstu(p1);
}
