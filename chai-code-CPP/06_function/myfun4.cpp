/*
lambda function :
mostly used frameworks and
libraries:


*/

#include<iostream>
using namespace std;

int main()
{
     
    // lambda functions : have no name 
    // variable hold definition of function {preparedChai}
   auto preparedChai = [](int cups ){
        cout <<"Preparing "<< cups << " Cups of tea "<<endl;

    };

    preparedChai(4);
    return 0;
};