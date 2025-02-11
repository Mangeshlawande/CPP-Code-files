#include <iostream>
using namespace std;


int  main() {
    cout<< "Enter a number :" <<endl;
    int n;
    cin>>n;

    // for (int i = n; i >= 1; i--)
    // {
    //     for (int j = 1; j <=i; j++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    //  half pyramid after 180 deg rotation 

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <=n; j++)
        {
            if (j<=n+1-i)
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
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <=n; j++)
    //     {
    //         if (j<=n-i)
    //         {
    //             cout<<" ";
    //         }
    //         else
    //         {
    //             cout<<"*";
    //         }
            
    //     }
    //     cout<<endl;
    // }
    
    return 0;
}