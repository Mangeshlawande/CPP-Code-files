#include<iostream>
#include<climits>
#include<vector>
using namespace std;

int main()
{
    vector <int>v={1,2,-1,3,4,56};
    // slide window pointer based approach 
   int windowSum = 0;
    int maxSum = INT_MIN;
    int k=3;
    int n = v.size();
    // first k element sum ;

    for(int i=0;i<k;i++ ){
        windowSum += v[i];
    };
    // O(k)

    for(int i=k;i<n;i++){
        windowSum=windowSum+v[i]-v[i-k];
        maxSum = max(maxSum,windowSum);
    }
    // O(n+k);

cout <<maxSum<<endl;


     
    return 0;
};