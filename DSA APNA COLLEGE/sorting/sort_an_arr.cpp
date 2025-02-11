#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
// sort an array with 0s, 1s, 2s elements;

void sortArr(vector<int>&arr, int n ){

// int count0=0, count1=0, count2=0;
// //O(n)
// for(int i=0; i<n; i++){
//     if(arr[i]==0)count0++;
//     else if(arr[i]==1)count1++;
//     else count2++;

// }

// int idx= 0;
// for(int i=0; i<count0;i++){
//     arr[idx]= 0;
// }

// for(int i=0;i<count1; i++){
//     arr[idx++]= 1;
// }
// for(int i=0; i<count2; i++){
//     arr[idx++]=2;
// };


// dutch national  flag algorithm 
/* 
vision : 3ptr low, mid, high 
     0 to low-1==0; 
     low - mid -1 ==1
      high +1 to n-1==2;

      high to mid store unsorted array



*/




int low=0, mid=0, high = n-1;
while(mid <=high){
    if(arr[mid]==0 ){
        swap(arr[low], arr[mid]);
        low++, mid++;

    }
    else if(arr[mid]==1){
        mid++;
    }
    else{
        swap(arr[mid], arr[high]);
        high--;
    }
}

};

void printArray(vector<int>&arr, int n ){

    for(int i=0; i<n; i++){
        cout <<arr[i]<<" ";
    }
    cout<< endl;

};


int main()
{
    vector<int>arr ={2,0,2,1,1,0,1,2,0,0};
    int n = arr.size();

    sortArr(arr, n);

    printArray(arr, n);

     
    return 0;
};