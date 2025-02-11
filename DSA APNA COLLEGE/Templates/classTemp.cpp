#include<iostream>
#include<fstream>
using namespace std;
template<typename T, typename R>
// template<class x>
class Demo
{
T f;
R y;// instance member variable

public:
void f1(T p, R q)
{
 cout << p + q<<endl;
};
};
int main()
{
    Demo <int, double>d1;
    d1.f1(5,6.7);

    return 0;
};


// #include<iostream>
// #include<fstream>
// using namespace std;
// template<typename T>
// // template<class x>
// class Demo
// {
// T f,y;// instance member variable

// public:
// void f1(T p, T q)
// {

// }
// };

// int main()
// {
//     Demo <int>d1;
//     d1.f1(5,6);
//     Demo <double>d2;
//     d2.f1(4.5,6.7);




//     return 0;
// };