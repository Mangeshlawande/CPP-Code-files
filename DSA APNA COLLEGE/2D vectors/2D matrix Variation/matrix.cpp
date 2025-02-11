/*
search in 2D matrix (mxn)

74 leetcode

each row sorted in increasing order 

the first int of each row is greater than the last int of previous row .

row range [st, end]=> unique, non-overlapping range 
*/
#include<iostream>
#include<vector>
using namespace std;

bool searchInRow(vector<vector<int>> & matrix, int target, int row){

 int n = matrix[0].size(); // cols 
 int st = 0 , end = n-1; 

 while (st<=end)
 {
    int mid = st + (end - st) /2;
    if (target == matrix[row][mid]){
        return mid ;
    }
    else if (target > matrix[row][mid]){
        st = mid + 1;
    }
    else{
        end = mid -1;

    }
 }
 return false;
}

bool searchMatrix(vector<vector<int>> & matrix, int target){

//  BS on total rows 

    int m = matrix.size(); // rows 
    int n = matrix[0].size(); // cols 

    int startRow = 0, endRow = n-1;
    while(startRow<= endRow){
        int midRow = startRow + (endRow- startRow)/2;

        if(target >= matrix[midRow][0] && target <= matrix[midRow][n-1]){
            // found the row => BS on this row;
           return  searchInRow(matrix, target, midRow);

        }
        else if(target >= matrix[midRow][n-1]){
            // downward => right 

            startRow = midRow +1;
        } 
        else{
            // up => left;
            endRow = midRow -1;
        }
    }

return false;
}


int main()
{
     
    return 0;
};