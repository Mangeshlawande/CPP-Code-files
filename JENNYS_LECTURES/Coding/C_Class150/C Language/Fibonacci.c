#include<stdio.h>
#include<conio.h>
// #include<stdlib.h>

void main(){
    int i,r,a=-1,b=1,c;

    printf("Enter a range :");
    scanf("%d",&r);

    for(i = 0; i<r;i++){

        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }

    getch();
}