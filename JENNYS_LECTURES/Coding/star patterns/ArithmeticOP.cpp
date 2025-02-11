#include <iostream>
using namespace std;
// binary (+,-,*,/,%)
// unary operator(++, --)


int  main() {
    // post increment
    // int a = 10;
    //  int b = a ++;
    cout<< " Operators: " <<endl;
    // cout<<a<<" "<< b<<endl;

    // int c = 3;
    // int d = ++c;
    // cout<<c<<" "<<d<<endl;

    // int i = 1;
    // int j =2;
    // int k ;
    //   //1 //2 //1     2      3     4 
    // //   13
    // k = i + j + i++ + j++ + ++i + ++j;
    // cout<<k;

    int i = 0;
    i = i++ - --i + ++i - i--;
    // 0   - 0  +  1    - 1=0
    cout <<i;

    return 0;
}