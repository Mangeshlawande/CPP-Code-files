# include <stdio.h>
#include <conio.h>


struct student{
    int roll_no;
    char name[10];
    float marks;

};
    int main() {
    int n;
   
    struct student s[3];
    // printf("Enter Number of students:\n");
    // scanf("%d",n);
    printf("give info of students:\n");
    for (int i = 1; i <=3; i++)
    {
        printf("Enter info for %d student:\n",i);
        scanf("%d %s %f",&s[i].roll_no,s[i].name,&s[i].marks);
    }
    for (int i = 1; i <=3; i++)
    {
        printf("Roll_no:%d  Name:%s Marks:%f\n",s[i].roll_no,s[i].name,s[i].marks);
    }
    
    
    return 0;
}