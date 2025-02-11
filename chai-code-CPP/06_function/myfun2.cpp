#include<iostream>
using namespace std;

     /*
     //pass by value :
      we  pass copy for a parameter in which it cant reflect original file; 

     &pass by reference : it can get the reference of original file , hence it can manipulate original file ;

     
     */

    void pourChai(int cups){
        cups = cups + 5;
        cout << "Poured Cups : "<<cups<<endl;
    }
int main()
{   int chaiCups = 2;
    pourChai(chaiCups);//pass copy value  
    cout<< "Total Cups "<<chaiCups<<endl;
    return 0;
};