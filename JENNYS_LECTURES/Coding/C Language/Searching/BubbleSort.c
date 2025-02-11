/*
The arrange of data in logical order , if the data is number 
then we arrange in ascending/ descending  order , if data is char / words then we arrange in dict order 
this is all sorting ;

*/
# include <stdio.h>
#include <conio.h>



void BubbleSort(int a[], int N){
 int temp;

         for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N-i-1; j++)
        {
            if (a[j]>a[j+1])    
            {
                temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;

            }
            
        }
        
    }
    printf("After Sorting:");
    for (int i = 0; i < N; i++)
    {
        printf("%d ",a[i]);
    }
    }


    int main() {
    int a[10];
    int i,j,N;
    printf("Enter a range :");
    scanf("%d",&N);
    printf("Enter %d Number ",N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d",&a[i]);
    }

   
    
    BubbleSort(a,N);
    getch();
    return 0;
}