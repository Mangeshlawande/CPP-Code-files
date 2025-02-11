# include <stdio.h>
#include <conio.h>

    int main() {
    int a [10]={78,45,65,9,67,52,11,8,5,3};
    int N,P,S, index,temp,min;
    // printf("Enter A range  :");
    // scanf("%d",&N);

    // printf(" Enter %d Numbers:", N);

    // for (int i = 0; i < N; i++)
    // {
    //     scanf("%d",&a[i]);
    // }
    for (int P = 0; P < 10-1; P++)       
    {
            min = a[P];
            index = P;
            for (int S= P+1; S < 10; S ++)
            {
                if(min >a[S])
                // if(a[P]>a[S])
                {
                    min = a[S];
                    index = S;    
              /*  temp = a[P];
                a[P]= a[S];
                a[S]=temp;*/
                }
            }
                temp = a[P];
                a[P] = a[index];
                a[index] = temp;  
    }
    printf("sorting Array:");
    for (int P = 0; P <10;P++)
    {
        printf("%d\n", a[P]);
    }

    return 0;
}