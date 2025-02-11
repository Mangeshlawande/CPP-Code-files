#include<iostream>
using namespace std;
/*
encapsulation 

*/

class BankAccount {
    private:
        string accountNumber;
        double balance;
    
    public:
    BankAccount(string accNum, double initialBal){
        accountNumber = accNum;
        balance = initialBal;

    }
    // getter 
    double getBalance() const {
        return balance;
    }
    // deposite money
    void deposite(double amount){
        if(amount > 0 ) {
            balance += amount;
            cout <<" Deposited : " << amount<< endl;
        }else{
            cout<< " Invalid deposite amount !!"<<endl;
        }

    }
    void withdraw(double amount){
        if(amount > 0 && amount <= balance){
            balance -= amount;
            cout<<"Your balance is :"<< balance<<endl;
        }else{
            cout << " Invalid amount"<<endl;
        }
    }
};

int main()
{
    BankAccount myAccount("12299980",500);
    myAccount.getBalance();

    myAccount.deposite(800);
    myAccount.withdraw(200);
     
    return 0;
};