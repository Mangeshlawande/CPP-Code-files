/*
there ae n books , each ith book has a[i] number of pages 
you have to allocate books to m number of students 
so that the maximum number of pages allocated to students is minimum 

each book should be allocated to student
each student has to be allocated at least  one biik 
allotment should each be in contiguous order 

calculate and return that minimum possible number 

return -1 if a valid assignment is not possible 

*/

#include<iostream>
#include<vector>

using namespace std;


bool isValid(vector<int>&arr, int n, int m, int maxAllowedPages){

    int students= 1, pages = 0;

    for(int i=0; i<n; i++){ // O(n)

        if(arr[i] > maxAllowedPages){
            return false;
        }

        if( pages + arr[i] <=maxAllowedPages){
            pages +=arr[i];
        }
        else{
            students ++;
            pages = arr[i];
        }
    }
    return students > m ? false : true;
};

int allocatedBooks(vector<int>& arr, int n , int m){  // O(logN * n)
    if(m > n){
        return -1;
    }

    int sum = 0; 
    for(int i=0; i<n; i++){  // O(n)
        sum +=arr[i];
    }

    int st=0, end=sum;//range of possible answer 
    int ans = -1;
    while(st <= end){ // O(logn);
        int mid = st + (end - st)/2;

        if(isValid(arr, n, m, mid))  // valid for left search
        {
            ans = mid ;
            end  = mid - 1;
        }else // invalid for right search 
        {
            st = mid + 1;
        }
    }
    return ans;

}

int main()
{
     vector<int> arr = {15,17,20};//32
    int bookNo= 3, maxStudents = 2;
    //  vector<int> arr = {2,1,3,4};
    // int bookNo= 4, maxStudents = 2;

    cout << allocatedBooks(arr, bookNo, maxStudents)<<endl;


    return 0;
};