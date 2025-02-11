#include <stdio.h>
#include <math.h>


struct student
{
    int roll;
    int marks;
    float per;
    char name[10];
    
};


int main() 
{ 
    struct student s1;
    printf("Enter roll number, marks, percent, and name of student:\n");
    scanf("%d %d %f %s", &s1.roll, &s1.marks,&s1.per, s1.name);
    printf("\nRoll Number : %d \nMarks : %d \nPercentage : %.2f \nName : %s ", s1.roll, s1.marks,s1.per, s1.name);
    return 0;
}
