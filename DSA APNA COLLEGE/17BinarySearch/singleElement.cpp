/*
find single element is sorted array
Binary_S O(logn) => TC

*/
#include<iostream>
#include<vector>
using namespace std;

int singleElement(vector<int>a){
    int n= a.size();
    
    if(n==1){return  a[0];}

    int st = 0, end = n-1;

    while(st <= end){
     int mid = st + (end - st) /2;

     if(mid ==0 && a[0]!=a[1]){ return a[mid];}

     if(mid ==end && a[end]!=a[end-1]){return a[mid];}

     if(a[mid-1] != a[mid] && a[mid] != a[mid+1]){
        return a[mid];
     }

     if(mid%2==0){//even no element subarray
        if(a[mid-1]==a[mid]){
            end = mid-1;
        }
        else{
            st = mid +1;
        }
     }else{//odd no element subarray
        if(a[mid-1]==a[mid]){
            st = mid + 1;
        }
        else{
            end  = mid-1;
        }
     }
    }
    return -1;
}

int main()
{
     vector<int> vec={ 1,1,2,3,3,4,4,8,8};
     vector<int> vec2={ 3,3,7,7,10,11,11,11};

    cout << singleElement(vec)<<endl;
    cout << singleElement(vec2)<<endl;


    return 0;
};