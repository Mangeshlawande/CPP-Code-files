#include<iostream>
// #include<bits/stdc++.h>
#include <vector>

using namespace std;
// run cmd :  g++ -std=c++11 vector.cpp && ./a.out

int main()
{
     
    // vector <int> vec = {1,2,4,8};
    // cout << vec[0] <<endl;

    // vector <int> vec1(3,0);
    // vector <int> vec1(size,element);

    // for( int i :vec1){

    // cout << i<<endl;
    // // cout << vec1[i]<<endl;
    // }
//  for char vec
    vector <int> vec = {'a','b','c','d'};

    cout << "Size = " << vec.size() << endl;
    // syntax for Each loop in cpp
    // for( char val :vec){
    // cout << val<< endl;
    // }

    vector <int> v1;//size =0;
    cout << "Size = " << v1.size() << endl;

    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(4);
    v1.push_back(8);
    v1.push_back(16);
    cout << "Size after push_back = " << v1.size() << endl;
    cout << "Capacity = " << v1.capacity() << endl;
    // v1.pop_back();
    // cout << "Size after pop_back = " << v1.size() << endl;



    // syntax for Each loop in cpp


    // for( int val :v1){
    // cout << val<< " ";
    // }

    // cout <<  v1.front() <<endl;
    // cout <<  v1.back() <<endl;

    // cout << v1[2] << endl;
    // cout << v1.at(1) << endl;

    cout << endl;

    return 0;
};
    /*
    Vector Functions ::
    size: return size of vec

    push_back : Push(Add/Insert) the element at end of the vector

    pop_back: remove the last element from vector ;
    front: print front value in the vector 
    back: last value 
    at : give value at particular index; 
     */