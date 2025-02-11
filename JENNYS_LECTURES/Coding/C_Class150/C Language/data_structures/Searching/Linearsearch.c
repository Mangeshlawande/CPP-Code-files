#include <stdio.h>
#include <conio.h>

LinearSearch(int a[], int r, int search)
{

    int k;
    for (int i = 0; i < r; i++)
    {
        if (a[i] == search)
        {
            printf("Number is Found at index %d", i + 1);
            k++;
            break;
        }
    }
    if (k == 0)
    {
        printf("Number is not Found !!");
    }
}

int main()
{
    int i, a[100], search; // a[10] = {55,6,34,26,73,41,73,25,66,12},;
    int r;
    printf("Enter a range:");
    scanf("%d", &r);
    printf("Enter %d numbers :", r);
    for (i = 0; i < r; i++)
    {
        scanf("%d", &a[i]);
    }

    /*
    printf("Enter 10 Numbers:");
     for (i= 0 ; i<10; i++){
        scanf("%d",&a[i]);

     }*/
    printf("Enter A number that you want to search :");
    scanf("%d", &search);
    LinearSearch(a, r, search);
    getch();
    return 0;
}