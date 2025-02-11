#include<iostream>
#include<string>
using namespace std;

/*

*/

class Tea{ 
    public:
        virtual void prepareIngredients()=  0;// pure virtual function
        virtual void brew()=  0;// pure virtual function
        virtual void serve()=  0;// pure virtual function


    void makeTea(){
        prepareIngredients();
        brew();
        serve();
    }
};
// make derived class :

class GreenTea : public Tea{
    void prepareIngredients() override {
        cout<< "Green leaves and water is ready along with Honey "<< endl;
    }

    void brew() override {
        cout << "Green Tea brewed !!" <<endl;
    }

    void serve() override {
        cout<< "Green Tea Served !!"<<endl;
    }

};

class MasalaTea : public Tea {
    void prepareIngredients() override {
        cout << "Green leaves and water is ready along with masala"<< endl;
    }

    void brew() override {
        cout << "Masala Tea brewed !!"<<endl;
    }

    void serve() override {
        cout << "Masala Tea Served !! "<< endl;

    }
    
};

int main()
{
    GreenTea greenTea;
    MasalaTea masalaTea;

    greenTea.makeTea();// imp details gets abstract/ hidden from user ;
    masalaTea.makeTea();
     
    return 0;
};