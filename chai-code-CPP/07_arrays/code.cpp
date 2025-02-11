#include<iostream>
using namespace std;


// g++ ./code.cpp && ./a.out


int main()
{
    int chaiTemperature[5] = {85,90,43,27,30} ;

    for(auto temp : chaiTemperature){
        cout << temp <<" degree C"<<endl;
    }
    cout<< endl;


    return 0;
};