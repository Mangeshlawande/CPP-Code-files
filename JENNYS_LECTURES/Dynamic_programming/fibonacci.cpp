#include<iostream>
using namespace std;
static  int count=0;

int fib(int n){// O(2^n)
    count++;

    // if(n<0){
    //     cout<< "Enter number greater than 0";
    // }
    // if(n==0){
    //     return 0;
    // }
    if(n==1 || n==0){
        return n;
    }
    int sum = fib(n-1) + fib(n-2);

    return sum;
}

int main()
{
    int n ;
    cout << "Enter the number to calculate fibonacci  series of that number :"<<endl;
    cin>>n;
    for (int i = 0; i <n; i++)
    {
    int res = fib(i);
    cout << res <<" ";
    }
    cout<<endl;
    cout<<count<<endl;
     
    return 0;
};