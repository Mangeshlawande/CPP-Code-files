#include<iostream>

using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j <=i; j++)
//         {
//             cout<<i+1<<" ";
//         }
//         cout<<endl;
//     }
    
// }


// int main(){
//     int n;
//     cin>>n;

//     int count = 1;
//     for (int i = 1; i <=n; i++)
//     {
//         for (int j = 1; j <=i; j++)
//         {
//             cout<<count<<" ";
//             count++;
//         }
//         cout<<endl;
//     }
    
// }
    
    int main(){
    cout<<"Enter a number :";

    int n;
    cin>>n;

    int count = 1;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout<<"*";
            count++;
        }
       int space = 2*n - 2*i;
       for (int j = 1; j <=space; j++)
       {
        cout<<" ";
       }
       for (int j = 1; j <=i; j++)
       {
        cout<<"*";
       }
       cout<<endl;   
    }
    for (int i = n; i >=1; i--)
    {
        for (int j = 1; j <=i; j++)
        {
            cout<<"*";
            count++;
        }
       int space = 2*n - 2*i;
       for (int j = 1; j <=space; j++)
       {
        cout<<" ";
       }
       for (int j = 1; j <=i; j++)
       {
        cout<<"*";
       }
       cout<<endl;   
    }
    
}