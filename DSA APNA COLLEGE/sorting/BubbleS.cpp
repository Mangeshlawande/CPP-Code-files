#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n){

    for(int i=0;i<n-1;i++){
        bool isSwap = false; //to optimize;

        for(int j=0;j<n-i-1;j++){
            if(arr[j]> arr[j+1]){
                swap(arr[j], arr[j+1]);
                isSwap = true;
            }
        }
        if(!isSwap){ // array is already sorted
         return;
        }
    }
// TC ==> O(N^2);
};

void printArray(int arr[], int n){

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout <<endl;
};

int main()
{
     int arr [] = {1,4,3,5,2};
     int n = 5;

     printArray(arr,n);
     bubbleSort(arr, n);
     printArray(arr,n);

    return 0;
};