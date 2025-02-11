/*
selection sort :
imagine into 2 parts
    1.sorted & 2.unsorted 

    pick the smallest element put in sorted part 

*/
#include<iostream>
using namespace std;

void selectionSort(int arr[], int n){

    for(int i=0;i<n;i++){
        int minIndex = i;
        for(int j=i+1;j<=n;j++){
            if(arr[j] < arr[minIndex]){
                minIndex =j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }

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
     selectionSort(arr, n);
     printArray(arr,n);
     
    return 0;
};