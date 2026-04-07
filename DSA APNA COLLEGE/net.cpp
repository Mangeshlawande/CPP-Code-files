#include<bits/stdc++.h>

#include<vector>

using namespace std;

# define LIMIT 5 

int x = 20 
// Q. write a function to convert the number from decimal to binary.
/*
num  = 100
ans = 0
pow = 1 
---
int rem = n % 2 
ans = ans + (rem * pow )
pow *= 10
n = n/2 

*/
int decToBin(int n ){
    // n = 100
    int ans ;
    

    return ans;
}

// Q. write a function to convert the number from binary to decimal.
/**
 * int ans = 0 , pow = 1
 * num = 10101;
 * while num>0;
 * rem  = num % 10;
 * ans = ans + (rem  * pow );
 * pow = pow * 2;
 * num =  num / 10;
 * 
 */
int binToDec(int num ){

};

long long int fact (long long n){
    if (n==0 || n==1 ){
        return 1 ;
    }
    return n * fact(n-1);

}
/**
 * recursion 
 * if(n 0){
 * return
 * }
 * 
 * decTobin(n/2);
 * cout<< n%2;
 */

long int decToBin(long long n){
    if (n==0){
        return;
    }
    decToBin(n/2);
    cout<< n%2;
}


int  binToDec(int n ){
    if (n==0){
        return 0;
        int lastDigit = n%10;
        int remaining =  n/10;

        return  lastDigit + 2 * binToDec(remaining);
    };
}


int main(){

    return 0;

}



/*

*/