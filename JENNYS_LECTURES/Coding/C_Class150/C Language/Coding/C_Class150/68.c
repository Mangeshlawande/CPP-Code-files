#include<stdio.h>
#include<conio.h>
#include<string.h>
// comparing two string.
// lexicographic comparison. -> strcmp,strncmp

// strcmp( const char * str1, const char *str2) ==> pointer to the string str1 ,str2;
int main(){
    char s1[30],s2[30];
    int value = 0, flag = 0;
    // printf("Enter String s1:\n");
    // gets(s1);
    // printf("Enter String s2:\n");
    // gets(s2);
    // value = strcmp(s1,s2);
    // if (value ==0){
    //     printf("Same");
    // }
    // else{
    //     printf("Not same");
    // }
    printf("Enter String s1:\n");
    gets(s1);
    printf("Enter String s2:\n");
    gets(s2);
 for(int i = 0 ;s1[i] != '\0' || s2[i] != '\0'; i++){
    if (s1[i]!= s2[i]){
       flag=1;
       break;
    }
    }
    if(flag ==0){
        printf("The String are same");
    }
    else{
        printf("The String are Not same");
    }
    return 0;
 }