#include<iostream>
#include<vector>
using namespace std;

 void fib(int n) {
        // if(n==0 || n==1){
        //     return n;
        // }
       int  a =-1, b=1,c;
        for(int i=0;i<n;i++){
            c = a + b;
            cout << c << " ";
            a=b;
            b=c;
        }
        cout<< endl;
    }

int main()
{
    int n ;
    cout << "Enter the Fibonacci number : ";
    cin >> n;

     fib(n);
    return 0;
};