#include<iostream>
using namespace std;


class Chai{

    private:
    string teaName;
    int serving;
    
    public:
    Chai(string name , int serve) : teaName(name) , serving(serve){};

    void display() const{
        cout<<"teaname"<<teaName<<endl;
    }
    friend bool compareServing( const Chai &chai1, const Chai &chai2);

};

    bool compareServing( const Chai &chai1, const Chai &chai2){
        return chai1.serving > chai2.serving;
    }


int main()
{
    Chai masalaChai("Masala Chai", 3);
    Chai gingerChai("Ginger Chai",4);
    
    masalaChai.display();
    gingerChai.display();

    if (compareServing(masalaChai, gingerChai)){
        cout<<"Masala chai have more servings"<<endl;
    }
    else
    {
        cout<<"Ginger chai have more servings"<<endl;
    }
    
     
    return 0;
};