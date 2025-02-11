/* 
reversing of string
run the  loop till length/2
 note: expected 'const char *' but argument is of type 'int'




*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

void main(){
/*
    char s1[20] = "Gamabunta";
    char s2[30];

    puts("Enter the String : ");
    gets(s2);
     printf("Before the reversing of string  : %s\n", s2);
    //  printf("Before the reversing of string  : %s\n", s1);
     strrev(s2);
    //  strrev(s1);
     printf("after the reversing of  string  : %s\n", s2);
    //  printf("after the reversing of  string  : %s\n", s1);
*/



char name[20] = "Kakashi Hatake";
int len;
len = strlen(name);
printf(" the length of the string is : %d \n", len);
// puts(len);
char temp;
printf(" The string is : %s\n", &name);
for(int i = 0 ; i<len/2; i++)
{
 temp = name[i];
 name[i] = name[len-1-i];
 name[len-1-i] = temp;

}
printf(" The reverse of string is : %s\n", &name);

    getch();
}