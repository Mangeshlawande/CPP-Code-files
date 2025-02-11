#include<stdio.h>
#include<conio.h>
// write a progrm to check the greatest number among 3 given numbers.

     int main () {
    //  int a,b,c;
    //  printf("Enter the 3 Numbers:\n ");
    //  scanf("%d %d %d",&a,&b,&c);
    //  if (a>b)
    //  {
    //     printf("a = %d",a);
    //  }
    //  else if (b>c)
    //  {
    //     printf("b=%d",b);
    //  }
    //  else{
    //     printf("c = %d",c);
    //  }
  // another logic 
    //   int a,b,c;
    //  printf("Enter the 3 Numbers:\n ");
    //  scanf("%d %d %d",&a,&b,&c);
    //  if (a>b)//if(a>=b && a>=c)  ==> 10>=20 && 10>=30 =F
    //  // if(b>=a && b>=c) ==> 20>=10 && 20>=30 = F
    //  //if (c>=a && c>=b) ==> 30>=10 && 30>=20 = T printf( "c= %d",c)
    //  {
    //     printf("a = %d",a);
    //  }
    //  else if (b>c)
    //  {
    //  //             b>c?printf("%d",a):printf("%d",b);
    //     printf("b=%d",b);
    //  }
    //  else{
    //     printf("c = %d",c);
    //  }



    int a,b,c;
     printf("Enter the 3 Numbers:\n ");
     scanf("%d %d %d",&a,&b,&c);
     // a>b? a>c?printf("%d",a):printf("%d",c):b>c?printf("%d",b):printf("%d",c):getch();
      //exp1?exp2:exp3
      printf("%d",a>b?a>c? a:c:b>c?b:c);
      getch();
return 0;
}