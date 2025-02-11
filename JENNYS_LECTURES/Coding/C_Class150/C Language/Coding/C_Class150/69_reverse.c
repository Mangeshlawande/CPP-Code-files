#include<stdio.h>
#include<string.h>

     int main () {
     int i,j,l;
     char s1[30],c;
     printf("Enter a string;\n");
     gets(s1);

     l = strlen(s1);
     printf(" Length of string is =%d\n",l);
   
for (i=0,j=l-1;i<j;i++,j--){
    c = s1[i];
    s1[i]= s1[j];
    s1[j] = c;
}
 printf("%s",s1);
 //  for ( i = 0; i <l/2; i++)
    //  {
    //    c= s1[i];
    //    s1[i] = s1[j-1-i];
    //    s1[j-1-i]= c;
    //  }
    //  printf("%s",s1);


return 0;
}