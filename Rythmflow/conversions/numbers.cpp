#include <iostream>
#include <vector>

using namespace std;

#define LIMIT 5

int x = 12; // global

// Q.1.1 write a function to convert the number from decimal to binary.

int decToBinary(int n)
{
    // n = 15--> 1111
    int rem, ans = 0, pow = 1;
    while (n > 0)
    {
        rem = n % 2;
        ans = ans + (rem * pow);
        pow = pow * 10;
        n = n / 2;
    }
    return ans;
}
// Q.1.2 write a function to convert the number from decimal to binary. // recursion
int dec_bin(int n)
{
    // n =15;
    if (n == 0)
    {
        return n;
    }
    return n % 2 + 10 * dec_bin(n / 2);
}

// Q.2.1 write a function to convert the number from binary to decimal . // recursion
int bin_dec(int n)
{
    // 1010
    if (n == 0)
    {
        return n;
    }
    return n % 2 + 2 * bin_dec(n / 10);
};
// Q.2.2 write a function to convert the number from binary to decimal . // loop

int binaryToDec(int n)
{
    // n =1010
    int rem, ans = 0, pow = 1; // 2^0 = 1

    while (n > 0)
    {
        rem = n % 2;
        ans = ans + (rem * pow);
        pow = pow * 2;
        n = n / 10;
    }
    return ans;
}

int main()
{
    // int res = decToBinary(x);
    int res = dec_bin(x);
    cout << x << " The Binary form is : " << res << endl;
    // cout << res << " in decimal form is : " << bin_dec(res) << endl;
    // cout << res << " in decimal form is : " << binaryToDec(res) << endl;

    return 0;
};