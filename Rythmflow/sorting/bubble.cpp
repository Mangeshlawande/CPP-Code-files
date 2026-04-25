#include<iostream>
using namespace std;


void bubbleSort(int arr[], int n){

    for(int i=0;i<n-1;i++){
        bool isSorted = false; //to optimize;

        for(int j=0;j<n-i-1;j++){
            if(arr[j]> arr[j+1]){
                swap(arr[j], arr[j+1]);
                isSorted = true;
            }
        }
        if(!isSorted){ // array is already sorted
         return;
        }
    }
// TC ==> O(N^2);

};

void printArray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<< arr[i]<<" ";
    }
    cout<<endl;
    
};


int main()
{
     
    return 0;
};