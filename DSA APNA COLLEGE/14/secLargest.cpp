#include<iostream>
using namespace std;

int main()
{
    int arr[10]={5,6,2,3,1,4,7,9,8,10}; 
    int largest1,largest2, i;
    int n= sizeof(arr)/sizeof(arr[0]);

    largest1 = arr[0];

    for(i=0; i<n;i++){
        if(arr[i] > largest1){
            largest1 = arr[i];

        }
    }
    largest2 = arr[0];
    for ( i = 0; i < n; i++)
    {
        if(arr[i] < largest1 && arr[i] > largest2){
            largest2 = arr[i]; 
        }
    }
    // cout << largest1<<" " <<largest2<<endl;
    cout << largest1<<", " <<largest2<<endl;
    

    return 0;
};