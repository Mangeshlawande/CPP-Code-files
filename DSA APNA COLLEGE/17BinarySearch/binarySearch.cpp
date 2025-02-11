#include<iostream>
#include<vector>

using namespace std;

int binarySearch(vector<int>vec, int target){
    // TC O(logn), SC O(1);

int st = 0, end = vec.size()-1;
while(st<=end){
    int mid = st + (end-st)/2;

    if(target > vec[mid]){
        st = mid + 1;
    }
    else if(target < vec[mid]){
        end = mid -1;
    }
    else if (target == vec[mid]){
        return mid;
    }
}
    return -1;
};

int recursiveBS(vector<int> vec, int target, int st, int end ){
// TC O(logn), SC O(n);
    if(st<=end){
        int mid = st+(end-st)/2;
        if(target > vec[mid]){
            return recursiveBS(vec, target, mid+1, end);
        }
        else if( target < vec[mid]){
            return recursiveBS(vec, target, st,mid-1);
        }
        else{
            return mid;
        }
    }
    else{
        return -1;
    }
}

int main()
{
     vector <int> vec1 = {-1,0, 3,4,5,9,12};
     int target1 = 9;
     int st = 0, end = vec1.size()-1;

    cout <<"Iterative binarysearch, Element found at index : "<< binarySearch(vec1, target1)<<endl;
    cout << "Recursive binarysearch, Element found at index : "<<recursiveBS(vec1, target1, st,end)<<endl;

    vector <int> vec2 = {-1,0,3,4,5,8,9,12};
     int target2 = 0;

     cout <<"Iterative binarysearch, Element found at index : "<< binarySearch(vec2, target2)<<endl;
     cout << "Recursive binarysearch, Element found at index : "<<recursiveBS(vec2, target2, st, end)<<endl;

    return 0;
};