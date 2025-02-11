/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void f1(){
    auto n = 89;
    static int x = 6;
    x = x-2;
    printf("%d ",x+x-(-x));
}

 int h;// global variable
int main()
{
    extern int h=12;
    printf("%d ",h);
    f1();
    f1();
    f1();

    return 0;
}