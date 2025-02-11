#include<iostream>
#include<string>
using namespace std;

/*
returnType functionName
returnType functionName(){
    // fun body
}

void => empty;
*/

// full function : declaration & defination
int checkTemp(int t){
    return t;

}
// function declaration 
void serveChai(int chai);
void serveChai(string teaType);




int main(){
    int temp = checkTemp(27);
    cout<< " temperature is : "<<temp<<"degree celsius."<<endl;

    // fun call
    // serveChai(5);
    serveChai("Lemon Tea");// actual parameter 

    return 0;
}

// function definition 
void serveChai(int cups){
    cout << " Serving " << cups << " of chai ."<<endl;

}
//fun overloading 
void serveChai(string teaType= " Masala Tea"){
    // default parameter set bydefault
    // formal parameter defined inside the function  
    int cups = 9;

    cout << "Serving " <<teaType<<endl;
}