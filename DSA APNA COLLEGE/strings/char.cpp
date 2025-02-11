#include <iostream>
#include <string>
#include <cstring>

using namespace std;

/*
\n -> 1 byte
\0 -> 1 byte
*/

int main()
{
    // char str[] = {'a','b','c','d', 'e','f','g','h','\0'};
    // char str[] = "Hello";// string literal (fixed values )

    // int arr [] = {1,2,3,4,5};
    // cout<< arr <<endl;//return memory address

    // cout<< str<< endl; // constant pointer
    // cout<< strlen(str)<< endl;

    char str[] = "apna college";
    int len = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        len++;
    }
    cout << " Length of string : " << len << endl;

    // cout << "Enter   Char array :" <<endl;
    // // cin >>str;

    // // Input / output :
    // // cin.getline(str,len,delim?)== name, len,
    // // delimiter=that stop the input

    // cin.getline(str,12);
    // // cin.getline(str,100, '$');
    // // cout <<"Output : "<< str <<endl;
    // for(char ch : str){
    //     cout<<ch<<" ";
    // }
    // cout << endl;

    return 0;
};