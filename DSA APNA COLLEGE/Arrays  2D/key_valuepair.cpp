#include<iostream>
#include<utility> // for std::pair
using namespace std;

// Function to return the row and column index of the key element
pair<int, int> linearSearch(int matrix[][3], int rows, int cols , int key) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(matrix[i][j] == key) {
                return make_pair(i, j); // Return row and column as a pair
            }
        }
    }
    return make_pair(-1, -1); // Key not found
}

int main() {
    int matrix[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {1, 5, 8}};
    int rows = 4;
    int cols = 3;
    int key = 8;

    pair<int, int> result = linearSearch(matrix, rows, cols, key);

    if(result.first != -1) {
        cout << "Key found at row " << result.first << " and column " << result.second << endl;
    } else {
        cout << "Key not found in the matrix." << endl;
    }

    return 0;
}
