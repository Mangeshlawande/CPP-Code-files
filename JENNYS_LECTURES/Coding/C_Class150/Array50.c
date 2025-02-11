#include<stdio.h>
#include<conio.h>

void main(){
    int i,marks[5];
    float avg ,sum=0;
    printf("Enter the marks of five students:\n");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&marks[i]);//taking marks from user
    }
// accessing marks from arrays
for ( i = 0; i < 5; i++)
{
    sum = sum + marks[i];
}
avg = sum/5.0;
printf("sum =%d and avg=%f ",sum,avg);
getch();
    
}