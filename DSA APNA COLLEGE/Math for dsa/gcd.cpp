#include<iostream>
#include<climits>
using namespace std;

    int hcf(int a , int b){
        while(a >0 && b > 0){
            if(a > b){
                a = a % b;
            }
            else{
                b = b % a;
            }
        }
        if(a==0) return b;
        return a;

    }




    int gcd(int a, int b){ // brute force approach 
        int gcd = 1;// if not exist worst case
    // base case 1
    if(a==0 || b==0){
        return 0;
    }

    // base case 2
    if(a==b){
        return a;
    }
        for(int i=1; i< min(a,b); i++){ 
            if(a%i==0 && b%i==0){
                gcd = i;
            }

        }
        return gcd;
    }

/*
Euclids Algorithm : 

    gcd(a,b) = gcd(a-b, b), a>b;
    gcd(a,b) = gcd(a%b, b), a>b;
    gcd(a,b) = gcd(a, b-a), a<b;
    gcd(a,b) = gcd(a, b%a), a<b;


    gcd(20, 28) = gcd(20, 28-20), 20<28;
    gcd(20, 8) = gcd(20-8, 8), 20>8;

    gcd(20, 8) = gcd(20-8, 8), 20>8;
    gcd(12, 8) = gcd(12, 8), 12>8;
    gcd(12, 8) = gcd(12-8, 8), 12>8;

    gcd(4, 8) = gcd(4, 8), 4<8;
    gcd(4, 8) = gcd(4, 8-4), 4<8;
    gcd(4, 4) = gcd(4, 4), 4==4; return i;




*/
 int gcdRec(int a, int b){
    if(b==0)return a;

    return gcdRec(b, a%b);
 }

int main()
{
    // int a =20, b = 28;
    int a,b;
    cout << "Enter two number to calculate  gcd(greatest common divisor) :" << endl;
    cin>> a>> b;

    //  cout << gcd(a,b)<<endl;
     cout << gcdRec(a,b)<<endl;
    //  cout << hcf(a,b)<<endl;
     
    return 0;
};