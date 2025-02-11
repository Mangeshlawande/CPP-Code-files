#include<iostream>
#include<vector>
using namespace std;

class Chai {
    private:
     string teaName;
     int servings; 
     vector<string> ingr;

    public : 
    Chai (){
        teaName = "Unknown tea";
        servings = 1;
        ingr = { "water", "tea leaves"};
        

    }
    Chai (string name, int serve, vector<string> ingredients){

        teaName = name;
        servings = serve;
        ingr = ingredients;
    }
    // getter : gets the value 
    string getTeaName(){
        return teaName ;
    };

    // setter : sets the value
    // 
    void setTeaName(string tea){
        //logic
        this->teaName = tea;
    }

    int getServings() {
        return this->servings +1;
    }
    void setServings(int serve){
        servings = serve;
    }

    vector<string> getIngredients(){
        return this->ingr;
    }
    void setIngredients(vector<string> ingredients){
        ingr = ingredients;

    }

    void displayChaiDetails()
    {
        cout << " Tea Name: " << teaName << endl;
        cout << " Servings: " << servings << endl;
        cout << " Ingredients: ";

        for (string ingridient : ingr)
        {
            cout << ingridient << " ";
        }
        cout << endl;
    }
};

int main()
{
     Chai chai;

    chai.setTeaName("Ginger Tea");
    chai.setServings(2);
    chai.setIngredients({"lemon","water", "Honey"});
    chai.displayChaiDetails();
    return 0;
};