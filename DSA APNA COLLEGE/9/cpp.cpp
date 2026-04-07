#include <iostream>
#include <unordered_map>
#include<unordered_set>
using namespace std;

/*
create map

count freq of each ele

print only 1 element


*/
void printUnique(int arr[], int n)
{
    unordered_map<int, int> counts;

    for (int i = 0; i < n; i++)
    {
        counts[arr[i]]++;
    }

    // print
    for (int i = 0; i < n; i++)
    {
        if (counts[arr[i]] == 1)
        {
            cout << arr[i] << ", ";
        }
    }
    cout << endl;
};

/*
unique bruteforce
bool
for -- i
for -- j
arr[i] == arr[j]
unique = false
break;
}
if unique == true
print a[i]


*/
void bruteForce(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        bool unique = true;

        for (int j = 0; j < n; j++)
        {
            if (i != j && arr[i] == arr[j])
            {
                unique = false;
                break;
            }
        }

        if (unique == true)
        {
            printf("%d, ", arr[i]);
        }
    }
    cout << endl;
};

/*
*Intersection 
store element in hash set
check each element of the seecond array against the set 



*/

void printIntersection(int arr1[], int n1 ,int arr2[],int n2 ){

    // store thie element in hashset 
    unordered_set<int> set1 ;
    for(int i=0; i<n1; i++){
        set1.insert(arr1[i]);
    }
    // chechk each element in second arr 
    cout << "Intersection :";
    for (int i=0; i<n2;i++ ){
        if(set1.find(arr2[i]) != set1.end()){
            cout << arr2[i]<<" ";
            set1.erase(arr2[i]);
        }
    }
    cout<<endl;

};




int main()
{
    int arr[] = {1, 2, 3, 2, 4, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printUnique(arr, n);
    bruteForce(arr, n);

    return 0;
}