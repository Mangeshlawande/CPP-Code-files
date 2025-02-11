#include<iostream>
#include<vector>
using namespace std;

class Chai{
    public : 
    string teaName;
    int serving ;
    vector<string> ingredient;

    // delegating constructor

    Chai (string name) : Chai(name, 2, {"water" , "tea Leaves"}){};

    // main constructor 
    Chai (string name, int serve, vector<string>ingr){
        teaName = name;
        serving = serve;
        ingredient = ingr;

        cout<<"Main Constructor called !!" <<endl;

    };

    void displayChaiDetails()
    {
        cout << " Tea Name: " << teaName << endl;
        cout << " Servings: " << serving << endl;
        cout << " Ingredients: ";

        for (string ingridient : ingredient)
        {
            cout << ingridient << " ";
        }
        cout << endl;
    }
};



int main()
{
    Chai quickChai("Quick Chai");
    quickChai.displayChaiDetails();

     
    return 0;
};