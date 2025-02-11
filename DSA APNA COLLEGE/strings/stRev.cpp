#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(string s)
{
    string s2 = s;
    reverse(s2.begin(), s2.end());

    if (s2 == s)
    {
        return true;
    }
    else
    {
        return false;
    }
};

int main()
{
    string str = "apna college";

    // reverse(str.begin(), str.end());
    // // iterators
    // cout<< str<<endl;

    // find the string is palindrome or not ;
    string s;
    cout << "Enter the string : ";

    cin >> s;
    int r = isPalindrome(s);
    if (r)
    {
        cout << "Given string is palindrome " << endl;
    }
    else
    {
        cout << "Given string is not palindrome " << endl;
    }
    return 0;
};