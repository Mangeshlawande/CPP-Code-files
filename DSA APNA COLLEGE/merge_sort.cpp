#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[],int si, int mid, int ei){
    vector <int> temp;
    int i = si, j = mid + 1;

    while(i<= mid && j<=ei) {
        if(arr[i] <= arr[j]) {
            temp.push_back(arr[i++]);
        } else {
            temp.push_back(arr[j++]);
        }
    }

    while(i<=mid) {
        temp.push_back(arr[i++]);
    }

    while( j<=ei) {
        temp.push_back(arr[j++]);
    }

//  copy back to the original
    for(int idx = si, x=0; idx <=ei; idx++) {
        arr[idx] = temp[x++];
    }
};


void mergeSort(int arr[], int si, int ei) { 
    if(si >= ei) {
        return ; 
    }

    int mid = si + (ei-si) /2;
    mergeSort( arr, si, mid);
    mergeSort(arr, mid+1,ei);

    merge(arr, si, mid, ei);
}

int main()
{
    // vector<int>v = { 6,4,7,2,5,3,8};
    int arr[] = { 6,4,7,2,5,3,8};
   int  n = sizeof(arr)/sizeof(arr[0]);

     for(int i = 0; i<n-1;i++){
        cout<<arr[i]<<" ";
    };
    cout <<endl;
   mergeSort(arr, 0, n );
      for(int i = 0; i<n-1;i++){
        cout<<arr[i]<<" ";
    };
    cout <<endl;
    return 0;
};