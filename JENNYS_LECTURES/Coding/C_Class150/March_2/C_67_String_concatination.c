#include<stdio.h>
#include<conio.h>
#include<string.h>
//
//string concatination 
/*
source string and  Destination string 
syntax : strcat(s1, s2); s1 destination string , s2 source string 
*/

void main() {

    char s1[20] = "Mangesh";
    char s2[10] = "Lawande";
    int len1,len2;
    // strcat(s1,s2);// s2 string append to s1 string 
    // printf("%s", s1);
    len1 = strlen(s1);
    len2 = strlen(s2);

    // printf("\ns1 length %d",len1);
    // printf("\n s2 length %d",len2);
    //  for (int i = 0 ; i <=len2; i++){
    //     s1[len1 + i] =s2[i];
    //  }
    //  printf("\n%s", s1);

     strncat(s1, s2,4);
     printf("\n%s", s1);


}
