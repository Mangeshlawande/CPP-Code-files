#include<iostream>
using namespace std;

// columns size is compulsary 
bool linearSearch(int matrix[][3], int rows, int cols , int key){

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(matrix[i][j] == key ){
                return true;
            }
        }
    }
    return false;
    
};

int main()
{
     int arr[5] = { 1,2,3,4,5};
     int matrix[4][3] = {{1,2,3}, {4,5,6}, {7,8,9},{1,5,8}};
    // int matrix[4][3];

     int rows = 4;
     int cols = 3;

    // input 
    // for(int i=0; i<rows; i++){
    //     for(int j=0; j<cols; j++){
    //         cin>>matrix[i][j];
    //     }
    // }

    cout << linearSearch(matrix, rows, cols, 20)<<endl;

     // out put
    //  for( int i=0; i< rows; i++){
    //     for(int j =0; j< cols; j++){
    //         cout << matrix[i][j]<< " ";
    //     }
    //     cout<< endl;
    //  }
     cout << endl;
     
    return 0;
};