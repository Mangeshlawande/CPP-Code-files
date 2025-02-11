// How to read/ print a string ?

#include<stdio.h>
#include<conio.h>

void main(){
    // char name[30] = "Banana_fruit";
    char name[20], Lname[20];
    printf("Enter a name :\n");
    scanf("%s %s", name, Lname);// buffer overflow is occure
    // gets(name);// buffer overflow is occure
    printf("%s %s ", &name, Lname);
    // puts(name); 

    getch();
}

