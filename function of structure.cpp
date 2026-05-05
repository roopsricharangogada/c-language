#include <stdio.h>

/* structure definition */
struct student
{
    int rno;
    char name[10];
    float per;
};

/* global variables */
struct student s1 = {101, "raju", 79.90}, s2;

/* function prototype */
void display(struct student s);

int main()
{
    struct student s3 = {103, "rani", 89.00};

    printf("Enter student 2 values (rno name percentage): ");
    scanf("%d %s %f", &s2.rno, s2.name, &s2.per);

    display(s1);
    display(s2);
    display(s3);

    return 0;
}
