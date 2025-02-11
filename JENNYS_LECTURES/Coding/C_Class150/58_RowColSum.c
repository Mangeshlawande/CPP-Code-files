#include<stdio.h>


     int main () {
     int Sumd=0,i,j,Sr,Sc,a[3][3];
     printf("Enter the Element of Matrix:\n");

     for (i=0; i<3; i++){
          for(j=0;j<3;j++){
               scanf("%d",&a[i][j]);
          }
     } 
     for (i=0; i<3; i++){
          for(j=0;j<3;j++){
               printf("%d\t",a[i][j]);
          }
          printf("\n");
     } 

     printf("The Element of matrix is :\n");
     for (i=0; i<3; i++){
          Sr=Sc=0;
          for(j=0;j<3;j++){
               Sr = Sr + a[i][j];
               Sc = Sc + a[j][i];
               
               
          }
           Sumd = Sumd + a[i][i];
           printf(" Sum_Rows = %d, Sum_Diag = %d, and Sum_Col = %d \n",Sr, Sumd, Sc);
     } 
return 0;
}