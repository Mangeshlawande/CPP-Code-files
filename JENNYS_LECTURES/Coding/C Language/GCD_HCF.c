

#include <stdio.h>

int main()
{
    int x,y,i;
    printf("\nEnter 2 numbers:\n");
    scanf("%d%d",&x,&y);
    
    for(i=x<y?x:y; i>0; i--)
    {
        if(x%i==0 && y%i==0)
        {
            printf("\nHCF(Highest common multiple)/GCD(Greatest common divisor) of %d and %d is : %d\n", x,y,i);
            break;
        }
    }
    printf("Hello World");

    return 0;
}