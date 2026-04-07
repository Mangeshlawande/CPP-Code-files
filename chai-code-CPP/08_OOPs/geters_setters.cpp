// #include<iostream>
// #include<vector>
// using namespace std;

// class Chai {
//     private:
//      string teaName;
//      int servings; 
//      vector<string> ingr;

//     public : 
//     Chai (){
//         teaName = "Unknown tea";
//         servings = 1;
//         ingr = { "water", "tea leaves"};
        

//     }
//     Chai (string name, int serve, vector<string> ingredients){

//         teaName = name;
//         servings = serve;
//         ingr = ingredients;
//     }
//     // getter : gets the value 
//     string getTeaName(){
//         return teaName ;
//     };

//     // setter : sets the value
//     // 
//     void setTeaName(string tea){
//         //logic
//         this->teaName = tea;
//     }

//     int getServings() {
//         return this->servings +1;
//     }
//     void setServings(int serve){
//         servings = serve;
//     }

//     vector<string> getIngredients(){
//         return this->ingr;
//     }
//     void setIngredients(vector<string> ingredients){
//         ingr = ingredients;

//     }

//     void displayChaiDetails()
//     {
//         cout << " Tea Name: " << teaName << endl;
//         cout << " Servings: " << servings << endl;
//         cout << " Ingredients: ";

//         for (string ingridient : ingr)
//         {
//             cout << ingridient << " ";
//         }
//         cout << endl;
//     }
// };

// int main()
// {
//      Chai chai;

//     chai.setTeaName("Ginger Tea");
//     chai.setServings(2);
//     chai.setIngredients({"lemon","water", "Honey"});
//     chai.displayChaiDetails();
//     return 0;
// };

// getters and setters are member functions that allow controlled access to the private data members of a class. They are used to encapsulate the data and provide a way to get or set the values of private members.

#include <iostream>
#include <string>
#include <vector>   
using namespace std;

class Chai {
    private:
        string teaName;
        int servings;
        vector<string> ingredients; 
    public:
    Chai() {
        teaName = "Unknown tea";
        servings = 1;
        ingredients = {"water", "tea leaves"};
    }

    Chai(string name, int serve, vector<string> ingr) {
        teaName = name;
        servings = serve;
        ingredients = ingr;
    };


    // Getter for teaName
    string getTeaName() const {
        return teaName; 
    }

    // Setter for teaName
    void setTeaName(const string& tea) {
        teaName = tea;  
    }

    // Getter for servings
    int getServings() const {
        return servings;
    }       

    // Setter for servings
    void setServings(int serve) {
        servings = serve;
    }
    // Getter for ingredients
    vector<string> getIngredients() const {
        return ingredients;
    }   

    // Setter for ingredients

    void setIngredients(const vector<string>& ingr) {
        ingredients = ingr;
    };


    
};

int main() {

Chai chai;

    // Using setters to set values
    chai.setTeaName("Ginger Tea");
    chai.setServings(2);
    chai.setIngredients({"lemon", "water", "Honey"});

    // Using getters to retrieve values
    cout << "Tea Name: " << chai.getTeaName() << endl;
    cout << "Servings: " << chai.getServings() << endl;

    vector<string> ingredients = chai.getIngredients();
    cout << "Ingredients: ";
    for (const string& ingredient : ingredients) {
        cout << ingredient << " ";
    }
    cout << endl;

return 0;

}
