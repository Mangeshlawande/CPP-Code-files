/*
configuration and behaviour 
    Time Complexity 
1. O(1) => constant Time
3. O(logn) => Binary search 
2. O(n) => Linear Time
4. O(nlogn) => sorting 
6. O(n^2) => Quadratic
7. O(n^3) => polynomial
5. O(2^n) => exponential / Recursion 
8. O(n!) => cpermutation /bruth force



// 1 sec ~ 10^8 operations (max )
# constraints #

n > 10^8
    O(logn) , O(1) binary, constant
n <= 10^8
    O(n) , Linear 
n <= 10^6 
    O(logn), sorting (greedy){job scheduling problem }
n <= 10^4
    O(n^2)(max) 
n <= 500
     O(n^3)(max) 
n <= 25
     O(2^n)(max)  bruteforce recursion 
n <= 12
    O(n!) 



*/
// ?****?

#include<iostream>
#include<algorithm>
#include<math.h>
#include<climits>
using namespace std;



int factorial(int n){
    if(n==0){
        return 1;
    }

    return n * factorial(n-1);
};
// f(n)   = k + f(n-1);
// f(n-1) = k + f(n-2);
// f(n-2) = k + f(n-3);
// f(n-3) = k + f(n-4);

// f(1) = 1+ f(0)
//  TC =  total no of recursion call  * work in execution call;



int main()
{
    // sum of number from 1 to N

     int  n ; 
     cin>> n;
     int ans = n * ( n+1)/2;

// N factorial O(n*k)
int fact = 1 ;
for(int i = 1; i<= n ; i++) {
    fact *= i;
}

//  nth fibonacci -DP
    int dp[]={1,2,3};

for (int i=2; i<=n; i++){
    dp[i] = dp[i-1 ] + dp[i-2];
}


// kadanes algorithms
int currSum = 0 , ans = INT_MIN;
int arr[] = {};
for(int i = 0; i<n; i++){
    currSum +=arr[i];
    ans = max(currSum, ans);
    currSum = currSum < 0 ? 0:currSum;
}


// O(n^2) O(n^3) sorting
for(int i = 0 ; i<n-1; i++){
    for(int j = 0 ; j< n-i-1; j++){
        if(arr[j] > arr[j+1]){
            swap(arr[j], arr[j+1]);
        }
    }
}
// O(nlogn) => sorting merge sort, Quick sort (avg), greedy algos
// O(n!) => recursion (N-Queens, Knights Tour), all possible permutations
//;

     
    return 0;
};

