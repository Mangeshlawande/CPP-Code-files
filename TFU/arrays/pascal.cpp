// #include <iostream>
// #include <vector>
// using namespace std;

// // Function to generate Pascal's Triangle
// vector<vector<int>> generatePascalsTriangle(int N) {
//     vector<vector<int>> result;

//     for (int i = 0; i < N; ++i) {
//         // Create a row with 1s at both ends
//         vector<int> row(i + 1, 1);

//         // Fill in the intermediate values based on the previous row
//         for (int j = 1; j < i; ++j) {
//             row[j] = result[i - 1][j - 1] + result[i - 1][j];
//         }

//         // Append the row to the result
//         result.push_back(row);
//     }

//     return result;
// }

// // Function to print Pascal's Triangle
// void printPascalsTriangle(const vector<vector<int>>& triangle) {
//     for (const auto& row : triangle) {
//         for (int val : row) {
//             cout << val << " ";
//         }
//         cout << endl;
//     }
// }

// int main() {
//     int N;
//     cout << "Enter the number of rows for Pascal's Triangle: ";
//     cin >> N;

//     if (N >= 1 && N <= 30) {
//         vector<vector<int>> triangle = generatePascalsTriangle(N);
//         printPascalsTriangle(triangle);
//     } else {
//         cout << "Please enter a value between 1 and 30." << endl;
//     }

//     return 0;
// }

//......................................


#include <bits/stdc++.h>
using namespace std;

int nCr(int n, int r) {
    long long res = 1;

    // calculating nCr:
    for (int i = 0; i < r; i++) {
        res = res * (n - i);
        res = res / (i + 1);
    }
    return res;
}

int pascalTriangle(int r, int c) {
    int element = nCr(r - 1, c - 1);
    return element;
}

int main()
{
    int r = 5; // row number
    int c = 3; // col number
    int element = pascalTriangle(r, c);
    cout << "The element at position (r,c) is: " << element << "n";
    return 0;
}
        
        