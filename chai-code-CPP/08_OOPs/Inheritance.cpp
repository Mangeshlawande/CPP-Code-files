#include<iostream>
using namespace std;


// base/ parent / main 

class Tea{
    protected:
        string teaName ; 
        int serving;

    public : 
         Tea(string name , int serve) : teaName(name), serving(serve) {
            cout<< "Tea constructor called " << teaName<<endl;
         }

         virtual void brew() const { 
            cout << "Brewing " << teaName << " with generic method !!" <<endl;
         }

         virtual void serve() const{
            cout << "Serving " << serving<< " cups of tea with generic method !!"<< endl;
         }

         virtual ~Tea(){
            cout<< "Destructor called for "<<teaName<< endl;
         }

};

class GreenTea : public Tea {
    public : 
         GreenTea(int serve) : Tea("Green Tea", serve){
            cout << "Green Tea constructor called" << endl;
         }

    void brew() const override {
        cout<< "Brewing "<< teaName<<" by steeping green leaves ."<<endl;
    }

    ~GreenTea(){
        cout<< "Green Tea constructor called" <<endl;
    }


};  


class MasalaTea : public Tea {
    public : 
    MasalaTea(int serve) : Tea("Masala Tea", serve){
        cout << "Masala Tea Constructor called !!" << endl;
    }

    void brew() const override final {
        cout <<"Brewing "<< teaName<< " by steeping green tea leaves."<<endl;
    }

    ~MasalaTea(){
        cout <<"Masala Tea destructor called ."<<endl;
    }

};

// class SpicyMasalaTea : public Tea{
//     public:

//         SpicyMasalaTea(){

//         };

//         void brew() const override{
//             cout<< "Brewing "<< teaName << " with spices and milk."<<endl;

//         }
// };

int main()
{
    Tea * tea1;
    tea1 = new GreenTea(2);
    Tea * tea2 = new MasalaTea(3);

    tea1->brew();
    tea1->serve();

    tea2->brew();
    tea2->serve();
     delete tea1;
     delete tea2;

    return 0;
};