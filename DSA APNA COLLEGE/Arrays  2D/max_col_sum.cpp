#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

int getMaxColSum(int matrix[][3], int rows, int cols) {
    int maxColSum = INT_MIN;

    for(int j = 0; j < cols; j++) {
        int colSum = 0;

        for(int i = 0; i < rows; i++) {
            colSum += matrix[i][j];
        }
        maxColSum = max(colSum, maxColSum);
    }    

    return maxColSum;
}

int main() {
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rows = 3;
    int cols = 3;
    cout << "Maximum column sum: " << getMaxColSum(matrix, rows, cols) << endl;

    return 0;
}
