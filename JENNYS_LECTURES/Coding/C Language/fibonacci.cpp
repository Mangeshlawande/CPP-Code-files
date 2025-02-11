#include<iostream>
using namespace std;
static  int count=0;

int fib(int n){
    count++;

    if(n<0){
        cout<< "Enter number greater than 0";
    }
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int sum = fib(n-1) + fib(n-2);

    return sum;
}

int main()
{
    int n = 6;
    int res = fib(n);
    cout << res <<endl;
     
    return 0;
};