#include<stdio.h>
void main(){
    int a,b,Addition,substraction,Multiplication;
    float Division;
    char operator;
    printf("Enter operator :\n ");
    scanf("%c",&operator);

    printf("Enter two Operands:\n");
    scanf("%d %d",&a,&b);

    switch (operator)
    {
    case '+':
        Addition = a+b;
        printf("Addition=%d",Addition);
        break;
    case '-':
        substraction = a-b;
        printf("substraction=%d",substraction);
        break;
    case '*':
        Multiplication = a*b;
        printf("Multiplication=%d\n",Multiplication);
        break;
    case '/':
        Division = a/b;
        printf("Division=%f \n",Division);
        break;
    default:
    printf("Enter valid operator!!\n");
        break;
    }

}