#include <iostream>
using namespace std;


int  main() {
    cout<< "Rectangle pattern " <<endl;
    cout<< "Enter the number of columns and rows :"<<endl;
    int col, row;
    cin>>col>> row;

    // for (int i = 0; i < col; i++)
    // {
    //     for (int  j = 0; j < row; j++)
    //     {
    //         cout<<"* ";
    //     }
    //     cout<< endl; 
    // }
    

    /* 
    hollow rectangle pattern 
    rows =5 
    columns:4

*/
for (int i = 1; i<=row; i++)
{
    for (int j = 1; j <=col; j++)
    {
        if (i==1 || i== row)
        {
            cout<<"* ";
        }
        else if (j == 1 || j==col)
        {
            cout<<"*";
        }
        else
        {
            cout<<" ";
        }
    } 
    cout<<endl;
}


    return 0;
}