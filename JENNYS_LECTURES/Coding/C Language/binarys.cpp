/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;


int main()
{
    std::cout<<"Hello World"<<endl;
    int a[] = {11,22,33,44,55,66,77,88,99,100,110,120,130,140,150};
    int l=0,r=15,search, m, i;
    cout<<"enter a number you want to search : ";
    cin>>search;
    
    while(l<=r){
        m = (l+r)/2;
        if (a[m]==search){
            cout<<"The Number is found at index :"<<m<<endl;
            break;
        }
        else if(a[m]>search){
            r = m-1;
        }
        else if(a[m]<search){
            l = m + 1;
        }
        else{
            cout<<"Element is Not found !!";

        }
    }
    return 0;
}