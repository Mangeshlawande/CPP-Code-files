#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

 void nextPermutation(vector<int>& A) {
       int piv = -1, n= A.size();
        // find the pivot : pivot is always less than next element 
       for(int i=n-2; i>=0; i--){
        if(A[i] < A[i+1]){
            piv = i ;
            break;
        }
       } 
        // in place changes 
       if(piv==-1){
        reverse(A.begin(), A.end());
        return;
       }

       // 2: find the next larger element or swap the piv and next element ;
       for(int i= n-1; i>piv ; i--){
            if(A[i] > A[piv]){
                swap(A[i], A[piv]);
                break;
            }
       }


       // reverse the piv+1 to n-1 element;
        // reverse(A.begin()+piv+1, A.end());


      int i=piv+1, j=n-1;
      while(i<=j){
        swap(A[i++], A[j--]);
      }

      // next_permutation(A.begin(), A.end());
    }
int main()
{
     
    return 0;
};