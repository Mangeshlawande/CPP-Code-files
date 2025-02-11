#include <stdio.h>
#include <math.h>
#include<string.h>

int main() 
{ 
    char a[50], l,i;
    puts("Enter a string :");
    gets(a);
    
    l = strlen(a);
    
    for( i = 0; i<l/2;i++)
    {
        if(a[i] != a[l-1-i])
        {
           printf(" String is not a palindrome") ;
           break;
        }
    }
    if(i ==l/2){
        puts("string is palindrome ");
    }
    return 0;
}
