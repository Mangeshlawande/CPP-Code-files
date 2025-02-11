#include<stdio.h>
#include<conio.h>
// Transpose Matrix  is to print 
void main(){
    int i,j,a[2][3];
    printf("Enter the element of Matrix:\n");
    for ( i =0; i<2;i++){
        for(j=0;j<3;j++){
            scanf("%d ",&a[i][j]);
        }
    }
  printf(" The Transpose Matrix is :\n");
    for (i=0;i<3;i++){
        for(j=0;j<2;j++){
            printf("%d\t",a[j][i]);

        }
        printf("\n");
    }
}