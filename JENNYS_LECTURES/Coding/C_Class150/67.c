#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
    char s1[50],s2[50];
   int len1,len2;
    printf("Enter string s1:\n");
    gets(s1);
    printf("Enter string s2:\n");
    gets(s2);

    // strcat(s1,s2);
    // printf("%s",s1);


strncat(s1,s2,4);
    len1 = strlen(s1);
    len2 = strlen(s2);
    // puts(len1);
    // puts(len2);
    printf("len1 is =%d\n",len1);
    printf("len2 is =%d\n",len2);

    for (int i = 0; i <= len2; i++)
    {
        s1[len1 +i]= s2[i];
    }
    printf("%s",s1);
    
    return 0;
}