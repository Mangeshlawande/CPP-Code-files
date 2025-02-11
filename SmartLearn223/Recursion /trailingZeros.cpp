#include<iostream>
using namespace std;

int trailingZeroes(int n) {
        int sum=0;
	int tmp=0;
	while(n/5>0)
	{
		tmp=n/5;
		sum+=tmp;
		n=tmp;
    }
    return sum; 
    }
/*
Given an integer n, return the number of trailing zeroes in n!.

Note that n! = n * (n - 1) * (n - 2) * ... * 3 * 2 * 1.

 

Example 1:

Input: n = 3
Output: 0
Explanation: 3! = 6, no trailing zero.
Example 2:

Input: n = 5
Output: 1
Explanation: 5! = 120, one trailing zero.
Example 3:

Input: n = 0
Output: 0
 

Constraints:

0 <= n <= 104

*/
int main()
{
    int n;
    cout<< " Enter the Number : ";
    cin>> n;
   cout<< trailingZeroes(n)<<endl;


     
    return 0;
};