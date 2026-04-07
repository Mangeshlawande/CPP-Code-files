#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;


void printIntersection(int arr1[], int n1, int arr2[], int n2) {
    // Step 1: Store elements of the first array in a hash set
    std::unordered_set<int> set1;
    for (int i = 0; i < n1; i++) {
        set1.insert(arr1[i]);
    }

    // Step 2: Check each element of the second array against the set
    std::cout << "Intersection: ";
    for (int i = 0; i < n2; i++) {
        if (set1.find(arr2[i]) != set1.end()) {
            std::cout << arr2[i] << " ";
            // Optional: Remove to avoid duplicates in output
            set1.erase(arr2[i]); 
        }
    }
    std::cout << std::endl;
}


int main()
{
     
    return 0;
};