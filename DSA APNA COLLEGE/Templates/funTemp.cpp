#include<iostream>
#include<fstream>
using namespace std;

template<class p, class q>
void fun1(p x, q y){
q z = x+y;
cout <<z<<endl;
}
// template<class p>
// void fun1(p x, p y){
// p z = x+y;
// cout <<z<<endl;
// }


int main()
{
    // fun1(4,7);
    fun1(6,7.5);

    return 0;
};