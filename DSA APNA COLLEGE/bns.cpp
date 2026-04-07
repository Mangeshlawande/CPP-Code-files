#include <iostream>
using namespace std;
// Q. write a function to convert the number from decimal to binary.
int decToBinary(int decNum)
{
    int ans = 0, pow = 1;
    while (decNum)
    {
        int rem = (decNum % 2);
        ans = ans + (rem * pow);
        pow = pow * 10;
        decNum /= 2;
    }

    return ans;
};

// Q. write a function to convert the number from binary to decimal.

int binToDec(int num)
{
    int ans = 0, pow = 1;
    while (num > 0)
    {
        int rem = num % 10;
        ans = ans + (rem * pow);

        pow *= 2;
        num /= 10;
    }
    return ans;
};

int main()
{
    int n;
    int num;

    cout << "Hello  Binary Number System \n";
    cout << "data stored in the form of binary \n decimal == 0-9--> base 10 \n binary == 0-1  --> base 2\n hexa-decimal == 0-9 && A-F \n octal == 0-7   \n";
    cout << " \n";

    cout << "Enter 1 for decimal to binary.\nEnter 2 for binary to decimal." << endl;
    cin >> num;

    switch (num)
    {
    case 1:

        cout << "Enter decimal Number  : ";
        cin >> n;
        cout << "Decimal Number --> " << n << " Binary No --> " << decToBinary(n) << endl;

        // cout << "Enter decimal Number range : ";
        // cin >> n;
        // for (int i = 1; i <= n; i++)
        // {
        //     cout << "Decimal Number --> " << i << " Binary No --> " << decToBinary(i) << endl;
        // }


        break;
    case 2:
        cout << "Enter binary Number  : ";
        cin >> n;

        cout << "Binary Number --> " << n << " \nDecimal No --> " << binToDec(n) << endl;
        break;

    default:
    cout << "Please Enter valid Number !!."<<endl;
        break;

    };


    return 0;

};