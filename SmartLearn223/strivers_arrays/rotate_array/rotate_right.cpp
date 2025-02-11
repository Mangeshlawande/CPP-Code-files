#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void rightRotate(int arr[], int n, int d){

    reverse(arr[0],arr[n-d-1]);

    reverse(arr[n-d],arr[n-1]);

    reverse(arr[0],arr[n-1]);

}

int main()
{
    // int n;
    // cin >> n;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }

    int d;
    // cin >> d;
    int n=7;
    int arr [n] = {1,2,3,4,5,6,7};
    d=3;
    rightRotate(arr, n, d);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
};