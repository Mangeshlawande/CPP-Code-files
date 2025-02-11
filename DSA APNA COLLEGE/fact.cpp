#include<iostream>
using namespace std;

long long int fact(long long n){
    if(n==0 || n==1){
        return 1;
    }
    return n * fact(n-1);
}


long int factorial(int n){
    int fact =1;
    for(int i=1; i<=n; i++ ){
        fact  = fact * i;
    };
    return fact;
}
int main()
{
     int n; 
     cout << "Enter a number to calculate factorial : ";
    cin>> n;

    cout << "Factorial of number "<<n << " is "<<factorial(n)<<endl;

    //  cout << "Enter a range to calculate factorial : ";
    // cin>> n;
    // for(int i=1;i<=n; i++){

    // cout<<"The factorial of number "<< i<<" is "<<fact(i)<<endl;
    // }

    return 0;
};