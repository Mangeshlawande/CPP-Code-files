#include<iostream>
using namespace std;
//calc diagonal sum of matrix 
// primary diag , 2ry diagonal  calc both of them ;
/*
pd = 1+6+11+ 16= 34

pd : j= i;
sd : j= n-i-1;
*/

int diagSum (int matrix[][4], int n){  // O(n)
int sum =0 ;

    for(int i=0; i< n; i++) {
        sum += matrix[i][i]; 
        if( i != n-i-1) {
            sum += matrix[i][n-i-1];
        }
    }


// for(int i=0; i<n; i++){// O(n2);
//     for(int j=0; j<n; j++){
//         if(i==j){
//             sum += matrix[i][j];
//         }else  if(j== n-i-1){
//             sum += matrix[i][j];
//         }
//     }
// }s
return sum;

}


int main()
{
     int matrix[4][4] = {{1, 2, 3,4}, { 5, 6,7,8}, { 9,10,11,12},{13,14,15,16}};
    // int rows = 3;
    // int cols = 3;
    int n = 4; 
    cout << " diagonal sum : " << diagSum(matrix, n) << endl;
     
    return 0;
};