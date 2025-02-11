#include<iostream>
using namespace std;

     /*
     //pass by value :
      we  pass copy for a parameter in which it cant reflect original file; 

     &pass by reference : it can get the reference of original file , hence it can manipulate original file ;

//for defines scopes use {}
if scope
scope spilling : scope ke under kiya hua kam bahar nhi  aata hai;
if(){

}
     
     */
    int globalChaiStock = 100;

    void pourChai(int &cups) // pass value reference 
    {
        int test  = 20;
        if(1){
            int t = 0;
        }
        cups = cups + 5;
        cout << "Poured Cups : "<<cups<<endl;
    }
int main()
{   int chaiCups = 2;
    pourChai(chaiCups);//pass reference of value  
    cout<< "Total Cups "<<chaiCups<<endl;
    return 0;
};