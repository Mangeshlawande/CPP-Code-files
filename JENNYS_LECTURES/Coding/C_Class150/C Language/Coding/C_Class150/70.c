#include<stdio.h>
#include<string.h>

//convert uppercase letter to lowercase letter
     int main () {
     //strlwr(), strupr()
//   char s1[30],ch;
//      printf("Enter the String:\n"); 
//      gets(s1);
//      strlwr(s1);
//      printf("The string is :%s\n",s1);
  char s1[30],ch;
  int i;
     printf("Enter the String:\n"); 
     gets(s1);
    for( i=0; s1[i]!='\0';i++){
        if(s1[i]>='A' && s1[i]<='Z'){
             s1[i] = s1[i] + 32;

        }
    }
     printf("The string is :%s\n",s1);
return 0;
}