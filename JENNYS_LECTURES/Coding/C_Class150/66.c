// how to find out length of string using predefined function i.e. strlen

#include<stdio.h>
#include<conio.h>
// #include<string.h>

int main(){
char name[30];
int count = 0, i = 0;
printf("Enter Name:");
gets(name);
// count = strlen(name);
// puts(name);
// printf(" %d ",count);
while(name[i] !='\0')
{
   count++;
   i++;
}
puts(name);
printf("The Length of string is = %d ",count);
return 0;
}