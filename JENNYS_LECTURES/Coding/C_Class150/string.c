#include<stdio.h>
#include<conio.h>
//65.c
int main(){

    // buffer overflow problem.--> try to read complete line 
    //scanf(); and gets();

    // char fname[30],lname[20];
    char name[30];
    printf("Enter name :\n");
    // scanf("%s %s",fname,lname);
    // printf("%s %s",fname, lname);
    gets(name);// scanf or gets and printf or puts
    // scanf("%5s",name);
    // printf("%.5s\n",name);
    // printf("%10.5s\n",name);
    printf("%s\n",&name[2]);
    // puts(name);
    // puts(name);
    return 0;
}