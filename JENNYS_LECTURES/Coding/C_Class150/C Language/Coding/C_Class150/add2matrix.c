#include<stdio.h>


     int main () {
     int a[2][3],b[2][3],c[2][3],i,j;
   printf("Enter Elements of matrix a :\n");
     for(i=0; i<2; i++){
        for (j=0; j<3; j++){
            scanf("%d", &a[i][j]);
        } 
     }
     for(i=0; i<2; i++){
        for (j=0; j<3; j++){
            printf("\n%d\t", a[i][j]);
        } 
        printf("\n");
     }

     // Second Matrix is 
     printf("Enter Elements of Matrix b:\n"); 
      for(i=0; i<2; i++){
        for (j=0; j<3; j++){
            scanf("%d", &b[i][j]);
        }
      }
      for(i=0; i<2; i++){
        for (j=0; j<3; j++){
            printf("\n%d\t", b[i][j]);
        }
        printf("\n");
      }

      // Addition of Two matrix is :

printf("The Addition of Matrix a and b is :\n\n");
      for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            c[i][j] = a[i][j] + b[i][j];
            printf("%d\t",c[i][j]);
        }
         printf("\n");
      }

return 0;
}