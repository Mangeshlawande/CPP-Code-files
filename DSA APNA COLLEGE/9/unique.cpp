#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;



void printUnique(int arr[], int n ){
    unordered_map <int,int>counts;

    // count the frequency of each element 
    for (int i = 0; i<n; i++){
        counts[arr[i]]++;
    }

    // print only element with fredquency 1 
    cout <<"Unique elements : ";
    for(int i=0; i<n; i++){
        if(counts[arr[i]] == 1){
            cout << arr[i] << " ";
        }
    }
    cout <<endl;
}


// O(n)^2
void printUniqueBruteForce(int arr[], int n){
    for(int i= 0; i<n; i++){
        bool isUnique = true;

        for(int j=0; j<n; j++){
            if(i!=j && arr[i]==arr[j]){
                isUnique = false;
                break;
            }
        }

        if(isUnique==true){
            cout<< arr[i]<<" "<<endl;
        }
    }
}




int main()
{
     int arr[] = {1, 2, 3, 2, 4, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printUnique(arr, n);

    return 0;
};