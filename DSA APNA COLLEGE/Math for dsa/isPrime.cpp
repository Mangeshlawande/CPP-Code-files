/*
seive Eratosthenes algorithm it neglect the multiple ofm i number 

*/

#include<iostream>
#include<vector>

using namespace std;

int countPrime(int n){
     if (n <= 2) return 0;  // No primes less than 2

        vector<bool> isPrime(n, true);  // isPrime[i] will be true if i is prime
        isPrime[0] = isPrime[1] = false; // 0 and 1 are not primes
        int count = 0;

        for (int i = 2; i * i < n; ++i) {
            if (isPrime[i]) {
                // Mark all multiples of i starting from i*i as false
                for (int j = i * i; j < n; j += i) {
                    isPrime[j] = false;
                }
            }
        }

        // Count the number of primes
        for (int i = 2; i < n; ++i) {
            if (isPrime[i]) {
                count++;
            }
        }

        return count;
    }


int main()
{
    int n = 50;
    cout<<countPrime(n)<<endl;
     
    return 0;
};