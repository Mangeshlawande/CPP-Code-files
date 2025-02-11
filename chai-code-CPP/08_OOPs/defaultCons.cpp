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

     Chai()// no return type 
     {
        teaName = "Unknown Chai";
        servings = 5;
        ingredients = {"water","Masala", "leaves", "ginger", "tea", "honey"};
        cout<< "CONSTRUCTOR Called !!"<<endl;
        cout<< "CONSTRUCTOR is a special type of method which have no return type !"<<endl;
        cout<< "CONSTRUCTOR name as same as class name."<<endl;
        cout<< "CONSTRUCTOR types : "<<endl;
        cout<< "1. dafault constructor  : "<<endl;
        cout<< "2. paramaterized constructor  : "<<endl;
        cout<< "3. Copy constructor  : "<<endl;
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

    // Chai chaiOne;
    // chaiOne.teaName = "Masala Chai";
    // chaiOne.servings = 5;
    // chaiOne.ingredients = {"water","Masala", "leaves", "ginger", "tea", "honey"};

    // chaiOne.displayChaiDetails();

    // Chai chaiTwo;
    // chaiTwo.teaName="Lemon Tea";
    // chaiTwo.servings=3;
    // chaiTwo.ingredients=  {"water","lemon", "leaves", "sugar", "tea", "sugar"};
    // cout<< endl;
    // chaiTwo.displayChaiDetails();


    Chai defaultChai;
    defaultChai.displayChaiDetails();

    return 0;
};