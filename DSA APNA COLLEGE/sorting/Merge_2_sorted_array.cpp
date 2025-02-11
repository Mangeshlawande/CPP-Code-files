#include<iostream>
#include<vector>

using namespace std;
// O(m+n) TC
// O(1) SC

 void merge(vector<int>& A, int m, vector<int>& B, int n) {
        int i = m-1, j = n-1, idx = m+n-1;

    while(i >=0 && j >=0){
        if(A[i] >= B[j]){
            A[idx] = A[i];
            idx--, i--;
        }
        else{
            A[idx--] = B[j--];
        }
    }
    while(j>=0){
        A[idx--]=B[j--];
        
    }
        
    }


int main()
{
     vector<int> arr1= {1,2,3,0,0,0};
     int m = 3;
     vector<int> arr2= {4,5,6};
     int n = 3;
    return 0;
};