#include <stdio.h>

void main()
{
    int x = 5;
    int * y ;
    int ** z;

    y = &x;
    z = &y;
    *y =7;
    **z = 6;
    printf("%d \n",x);

    printf("%d \n",y);
    printf("%d \n",&y);
    printf("%d \n",*y);
    printf("%d \n",**z);
    printf("%d \n",*z);

    // getch();
}