#include<iostream>
using namespace std;

double myPow(double x, int n){
    long binform = n;
     
     if(binform < 0){
        x = 1/x;
        binform = -binform;
     }
     double ans = 1;
     while (binform > 0)
     {
        if (binform%2==1){
            ans = ans*x;
        }
        x = x*x;//x2;
        binform/=2; 
     }
    return ans;
}
int main()
{   int n;
     
     double x;
     cout << "Enter the number : " ;
     cin>> x;
     cout <<"\nEnter the power : " ;
     cin>> n;
    cout<< myPow( x,n)<<endl;
    
    return 0;
};
/*
Enter the number : 2

Enter the power : 10
1024
mangesh@mangesh-HP-245-G8-Notebook-PC:~/Desktop/DSA APNA COLLEGE/12$ cd "/home/mangesh/Desktop/DSA APNA COLLEGE/12/" && g++ pow.cpp -o pow && "/home/mangesh/Desktop/DSA APNA COLLEGE/12/"pow
Enter the number : 2

Enter the power : 3
8
mangesh@mangesh-HP-245-G8-Notebook-PC:~/Desktop/DSA APNA COLLEGE/12$ cd "/home/mangesh/Desktop/DSA APNA COLLEGE/12/" && g++ pow.cpp -o pow && "/home/mangesh/Desktop/DSA APNA COLLEGE/12/"pow
Enter the number : 2.1

Enter the power : 3
9.261
mangesh@mangesh-HP-245-G8-Notebook-PC:~/Desktop/DSA APNA COLLEGE/12$ cd "/home/mangesh/Desktop/DSA APNA COLLEGE/12/" && g++ pow.cpp -o pow && "/home/mangesh/Desktop/DSA APNA COLLEGE/12/"pow
Enter the number : 2.00

Enter the power : -2
0.25
*/