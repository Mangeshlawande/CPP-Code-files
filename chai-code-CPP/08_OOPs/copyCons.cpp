#include <iostream>
#include <vector>
using namespace std;
// microsoft docs;

class Chai
{
public: // access anywhere
    // data members/ attributes
    string teaName;             // name of tea
    int servings;               // number of servings
    vector<string> ingredients; // list  of ingrediants for tea ;
    // PARAMETERIZED CONSTRUCTOR    
     Chai(string name,int serve,vector<string> ingr)// no return type 
     {
        teaName = name;
        servings = serve;
        ingredients = ingr;
        
        cout<< "2. parameterized constructor called! : "<<endl;
     }
    // member function

    void displayChaiDetails()
    {
        cout << " Tea Name: " << teaName << endl;
        cout << " Servings: " << servings << endl;
        cout << " Ingredients: ";

        for (string ingridient : ingredients)
        {
            cout << ingridient << " ";
        }
        cout << endl;
    }

private: // access inside the class
    string name ;


};

int main()
{
    // class name 1st letter cap, and object start with small letter


    Chai gingerTea("Ginger Tea", 2, {"water", "ginger", "Honey", "Leaves", "pot"});
    gingerTea.displayChaiDetails();

    // copy the object
    

    return 0;
};