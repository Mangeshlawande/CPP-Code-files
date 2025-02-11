#include <iostream>
using namespace std;
// Define Relation between to operand;
// returns a boolean value (T,F)
//  ==  equal to
//  != not equal to
// >  greater than
//  < less than
// >= greater than equal to
// <= less than equal to

int main()
{
    // cout << " Relational Operator" << endl;

    // // Q 1. Input  a number n and tell whether it is equal to , less than or more than 10;

    // cout<< "Enter the number :"<<endl;
    // int a ;
    // cin>> a;
    // if (a==10)
    // {
    //     cout<< "The number is equall to 10.";
    // }
    // else if (a> 10)
    // {
    //     cout<<"The Number is Greater than 10";
    // }
    // else
    // cout <<"The Number is Less than 10";



    // cout << "Logical operators :";
/*
--> usedto connect multiple conditions /expressions tougether to reverse the logical value 
     AND gives true if bothe operands are true else false
     OR gives true if any of true 
     NOT gives opposite to the logical value
Q. write a program t output whether a number dividible by both 2 and 3 
or divisible only one of them 

*/
/*
cout << "Enter the number: "<<endl;
int n;
cin>>n;
if (n%2==0 && n%3==0)
{
    cout<<"The number is divisible by 2 and 3 both."<<endl;

}
else if (n%2==0)
{
    cout<< "The number is divisible by only 2"<<endl;

}
else if (n%3==0)
{
    cout<< "The number is divisible by 3 only"<<endl;
}
else
cout<< "The number is divisible by None of them !!";
*/

/*
4. bitwise operaators

it operates on bits  and perform bit by bit operations
      &  AND  operator         | OR operator
       0101                      0101
    &  0110                   |  0110
       0100                      0111

   ^ XOR operator           ~ Ones operator
   (same bit gives 0)          (it gives negation bit eg., ~(0101) = 1010)
(  diff bits gives 1)
0101
0110
0011

left shift operator (<<)--> shift 1 bits by left side 
4<<1
(0100) = 1000


right shift operator (>>) shift 1 bit right side
(0100) = 0010
*/
    
//  a<< n --> a*2^n 
// a >> n  --> a / 2^n
/*
5. assignment operator 

=    assignment operator
+=   assigns sum of operands 
-=   diff of two  operator 
*=   assign product of two operator 
/=   assign quotient of two operator 

6. Miscellaneous operators

sizeof() return size of variable 

condition ? X:Y returna value of x (Ternary operator )
cast  -- convert one datatype to another 
comma (,) cause sequence of operation to be perform 
& --> returns the addresss of vriable 
* --> pointer to varible 

*/

    return 0;
}