/*
3. For Loop
Challenge: Write a program that prints the brewing instructions for making 5 cups of tea. The brewing process should be printed once for each cup using a for loop.

Solution:
*/
#include <iostream>
#include <string>
using namespace std;
int main(){
    int teaCups = 5;
    int i = 100;

    for( int i = 1 ; i <= teaCups ; i++){
        cout << "Brewing cup " << i << " of tea..." << endl;
    }
    cout << i;
    cout << "Outside of loop";
    return 0;
}