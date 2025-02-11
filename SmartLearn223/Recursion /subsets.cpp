#include<iostream>
#include<vector>
using namespace std;

// Function to generate all subsets of a given set
vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> v;  // Vector to store subsets
    v.push_back(vector<int>());  // Start with an empty subset

    // Generate subsets by iterating over each element in nums
    for (int num : nums) {
        int size = v.size();  // Get the current size of subsets
        for (int i = 0; i < size; i++) {
            vector<int> temp = v[i];  // Copy existing subset
            temp.push_back(num);  // Add current number to it
            v.push_back(temp);  // Add the new subset to the list
        }
    }
    return v;  // Return all subsets
}

// Function to print a single subset
void printArr(vector<int> vec) {
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";  // Print each element
    }
    cout << endl;
}

int main() {
    vector<int> vec = {1, 2, 3};  // Input vector
    vector<vector<int>> result = subsets(vec);  // Generate subsets

    // Print all subsets
    for (auto subset : result) {
        printArr(subset);  // Print each subset
    }

    return 0;
}
