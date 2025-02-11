#include<iostream>
#include<bits/stdc++.h>
using namespace std;



void printDigits(int n){
    while (n !=0)
    {
         int digit = n % 10 ;
         cout<<digit;

         n = n/10;
    }
    cout <<endl;

}

void printSumDigits(int n){
    int sum=0;
    while (n !=0)
    {
         int digit = n % 10 ;
         sum+=digit;

         n = n/10;
    }
    cout<<sum<<endl;

}

bool isArmstrong(int n){
    int copyN = n;
    int sumOfCubes = 0;

    while(n !=0){
        int dig = n%10;
        sumOfCubes += (dig * dig * dig);

        n = n/10;
    }
    return (sumOfCubes== copyN);
}

int main()
{
     int n = 3568;

     printDigits(n);
     printSumDigits(n);

    // cout << (int) (log10(n)+1)<<endl;//  count digit of number 

    int num = 153;
    if(isArmstrong(num)){
        cout << " Number is Armstrong Number "<<endl;
    } else{
        cout << " Number is not  Armstrong Number "<<endl;

    }

    

    return 0;
};