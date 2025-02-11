#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool comparator(pair<int, int>p1, pair<int, int>p2){
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;

    if(p1.first < p2.first) return true;
    else return false;

};

int main()
{
    // 1. sort 
    // int arr[5] = {4,7,2,3,5};
    //  vector<int> v = {6,4,2,3};
    //  vector<pair<int, string>> vec = {{1, "Kakashi"},{2,"Saske"},{3,"Naruto"},{4, "sai"}, {5,"Lee"}};

    // vector<pair<int,int>> vec1 = {{3,1},{2,1},{7,1},{5,2},{4,3}};
    
    // sort(vec1.begin(),vec1.end(), comparator);

    // //  sort(arr, arr + 5);
     
    // //  sort(v.begin(), v.end());
    // //  sort(vec.begin(), vec.end());
     
    //  for(auto p : vec1){
    //     cout << p.first << " : "<<p.second;
    //     cout<< endl;
    //  }
    // cout<<endl;
    

    // // comparator   for reverse order 
    // sort(arr, arr+5, greater<int>());

    // // for(auto val : arr){
    // //     cout << val << " ";
    // //  }
    // // cout<<endl;


// 2. reverse 
    vector <int> vec2 = {1,2,4,8,16};
    // reverse(vec2.begin(), vec2.end());
    //  cout << * (max_element(vec2.begin(), vec2.end()))<<endl;;
    //  cout << * (min_element(vec2.begin(), vec2.end()))<<endl;;

    // reverse(vec2.begin(), vec2.end());

    // for (auto val : vec2){ 
    //     cout<< val << " ";

    // }
    // cout<<endl;

    // 3. next Permutation ()

    // string a = "abc";
    // next_permutation(a.begin(), a.end());

    // cout << a << endl;
    // prev_permutation(a.begin(), a.end());

    // cout<<a<<endl;

    // 4. swap min max ;

    // 5. max & min Element 

    // 6. Binary Search
    // cout<< binary_search(vec2.begin(), vec2.end(), 12)<<endl;

//  7. Count Set bits;
    int l = 16;
 long int m = 13;
 long long int n = 15;


    cout<< __builtin_popcount(l)<<endl;
    cout<< __builtin_popcountl(m)<<endl;
    cout<< __builtin_popcountll(n)<<endl;

    return 0;
};