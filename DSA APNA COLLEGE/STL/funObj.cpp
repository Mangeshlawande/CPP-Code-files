// function Objects(functor): A Function wrapped in a class so  it is available 
// like an object 
#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

int main()
{
     int arr[] = { 10,3,56,43,12,16};
    //  sort(arr, arr+5);// it sort 1st 5 element 
     sort(arr, arr+6, greater<int>());// it sort 1st 5 element 

     for (int i = 0; i < 6; i++)
     {
        cout<<arr[i]<<" ";
     }
     cout<<endl;
    return 0;
};