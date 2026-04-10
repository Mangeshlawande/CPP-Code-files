#include<iostream>
#include <bits/stdc++.h>
using namespace std;

# define  LIMIT 5

int x = 20;

namespace N {
    int val = 30;

};

class A {

    public:
    static int c ;

};

int A :: c = 17;


int main()
{
     int a;
     const float Pi = 3.14159;
    vector<int> arr = {1,2,3,4,5,6 };


    vector<int> :: iterator first = arr.begin();
    cout<< *first + 1 <<endl;

     cout <<"The constant value of Pi is " <<Pi << endl;
    
    int x = 10;

    cout << :: x<<endl;
    cout <<"c = "<< A:: c <<endl;
    // cout << N:: val<<endl;
    // printf("%f\n", Pi);
    // printf("%d\n", a);
    
    return 0;
};