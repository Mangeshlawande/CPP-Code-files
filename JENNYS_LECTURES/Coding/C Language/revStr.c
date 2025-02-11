#include <stdio.h>
#include <math.h>
#include<string.h>

int main() 
{ 
    char a[50], temp, l;
    puts("Enter a string :");
    gets(a);
    l = strlen(a);
    
    for(int i = 0; i<l/2;i++){
        temp = a[i];
        a[i] = a[l-1-i];
        a[l-1-i] = temp;
    }
    puts(a);
    
    
    return 0;
}
