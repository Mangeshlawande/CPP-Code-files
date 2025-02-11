
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector <int> moveZeros(int n, vector<int> a){
    // temp array
    vector<int> temp;
    //copy non-zeero element 
    for(int i=0; i<n; i++){
        if(a[i]!=0){
            temp.push_back(a[i]);
        }
    }
    // number of nonzero element s;
    int nz = temp.size();
        //copy elements from temp
    //fill first nz fields of
    //original array:

    for(int i=0;i<nz; i++){
        a[i] = temp[i];

    } 

    for(int i=nz; i<n; i++){
        a[i] = 0;
    }
    return a;
}


int main()
{
     
   vector<int> arr = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
    int n = 10;
    vector<int> ans = moveZeros(n, arr);
    for (auto &it : ans) {
        cout << it << " ";
    }
    cout << '\n';
    return 0;
};