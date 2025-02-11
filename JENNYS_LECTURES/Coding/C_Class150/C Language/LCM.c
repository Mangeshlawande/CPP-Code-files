

#include <stdio.h>

int main()
{
    int x,y,i;
    printf("\nEnter 2 numbers:\n");
    scanf("%d%d",&x,&y);
    
    for(i=x>y?x:y; i<x*y; i++)
    {
        if(i%x==0 && i%y==0)
        {
            printf("\nThe Least common mutiple (LCM) of %d and %d is : %d\n", x,y,i);
            break;
        }
    }
    printf("Hello World");

    return 0;
}