#include <iostream>
#include <string> // Standard header for string
// #include <bits/stdc++.h> // Avoid using this in production; it includes everything

using namespace std;

int main()
{
    string str = "is game";
    cout << str << endl;

    string s2 = "the matrix";
    // CORRECTED: It concatenates string objects, not arrays.
    cout << s2 + str << endl;

    // CORRECTED: It compares the content of the string objects (lexicographically).
    cout << (str == s2) << endl;

    char ch[] = "apna college ";
    // CORRECTED: 'ch' is a C-style array. Its size is fixed at compile time.
    cout << str.length() << endl;

    string strInput; // Renamed to avoid conflict with the 'str' above
    cout << "Enter A string: ";
    // getline reads the whole line including spaces until a newline.
    getline(cin, strInput);

    cout << "output: " << strInput << endl;

    string s = "String Object";

    // Traditional for loop: accesses characters by index.
    for (int i = 0; i < s.length(); i++)
    {
        cout << s[i];
    }

    // Range-based for loop: cleaner way to iterate through every character.
    for (char c : s)
    {
        cout << c;
    }

    cout << endl;
    return 0;
}
