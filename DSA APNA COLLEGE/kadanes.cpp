#include<iostream>
#include <vector>
#include <climits>
using namespace std;
//

// maximum subarray sum (kadanes algo :optimized approach)
int main()
{
// int n = 5;
// int arr[n] = { 1,2,4,8,16};

// for(int st=0 ; st<n; st++){
//     for (int end= st; end < n; end++){
//         for (int i = st ; i<= end; i++){
//             cout <<arr[i];
//         }
//         cout << " "; 
//     }
//     cout << endl;
// }
     
     // maximum sub array sum ;
/*
    int n =7;
    int ar[n] = { 3, -4, 5, 4, -1, 7, -8 };

    int maxSum = INT_MIN;
    for(int st=0; st<n; st++){
        int currSum = 0;
        for( int end = st; end<n; end++){
            currSum += ar[end];
            maxSum = max(currSum, maxSum);
        }
    }

    cout << "max subarray Sum = " << maxSum<<endl;
*/

// Kadanes Algorithms (Optimized )
// a type of dynamic programming algorithms 
// when the number becomes less than 0 , it reset to 0 ; 
    int n =7;
    int ar[n] = { 3, -4, 5, 4, -1, 7, -8 };

     int currSum = 0 , maxSum = INT_MIN; 
     for(auto val : ar){
        currSum += val;
        maxSum = max(currSum, maxSum);

        if(currSum <0 ){
            currSum =0;

        }
     }
     cout << "subarray Maxsum is :"<< maxSum<< endl;

    return 0;
};