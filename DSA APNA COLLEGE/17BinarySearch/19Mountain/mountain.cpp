#include<iostream>
#include<vector>

using namespace std;
/*
peak index in mountain array
BS Leetcode 852;



*/
 int Mountain(vector<int> a){
    int st = 1, end = a.size()-2;

    while(st<=end){
        int mid = st +(end-st)/2;
        if(a[mid-1]< a[mid] && a[mid]> a[mid+1]){
            return mid;
        }
        if(a[mid-1]< a[mid]){//right search
            st = mid + 1; 
        }
        else{//left search 
            end = mid-1;
        }

    }
    return -1;

 }
int main()
{
    vector<int> arr={0,3,8,9,5,2};
    int peak = 9;
    int r;
    r = Mountain(arr);
    cout <<r<<endl;

     
    return 0;
};