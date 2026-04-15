#include <iostream>
#include <cstring>
#include <string>

using namespace std;

/*
\n -> 1 byte
\0 -> 1 byte
*/

int main()
{
    char alpha[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', '\0'}; // char array
    // string literal (fixed values )

    string fullname = "Mangeshlawande";

    int arr[] = {1, 2, 3, 4, 5};
    // cout << arr << endl; // return memory address

    char str[20] = "apna college";
    int len = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        len++;
    }
    cout << " Length of string : " << len << endl;

    cout << "Enter Char array :" << endl;
    // cin >> str;

    cin.getline(str, 16);
    // cin.getline(str,100, '$');
    cout << "Output : " << str << endl;

    for (char ch : str)
    {
        cout << ch << " ";
    }
    cout << endl;

    return 0;
};