#include<iostream>
using namespace std;

int* preparedOrder(int cups){
   int * orders = new int[cups];
    for (int i = 0; i < cups; i++)
    {
        orders[i] = (i + 1) * 10;
    }
    return orders;
}

int main()
{
    int cups = 5;
    int * chaiOrders = preparedOrder(cups);
    for (int i = 0; i < cups; i++)
    {
        cout<< "Cups : "<< i+1 <<" has "<< chaiOrders[i]<<" ml."<<endl;
    }
    cout<<"\n";
    delete[] chaiOrders;
    cout<<" Dynamic memory is getting deleted successfully. \n";

    return 0;
};