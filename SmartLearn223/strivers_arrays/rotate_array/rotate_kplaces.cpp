#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void leftRotate(int arr[], int n, int d)
{ // brute force approach
    d = d % n;

    int temp[d];
    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[i];
    }

    for (int i = d; i < n; i++)
    {
        arr[i - d] = arr[i];
    }

    for (int i = n - d; i < n; i++)
    {
        arr[i] = temp[i - (n - d)];
    }
}

    // void Reverse(int arr, int start, int end)
    // {
    //     while(start <= end)
    //     {
    //         int temp = arr[start];
    //         arr[start] = arr[end];
    //         arr[end] = temp;
    //         start ++;
    //         end --;
    //     }

    // }

    void lRotate(int arr[], int n, int k) {

        // Reverse(arr,0, n-k-1);
        reverse(0, n-k-1);

        // Reverse(arr,n-k, n-1);
        reverse(n-k, n-1);


        // Reverse(arr,0, n-1);
        reverse(0, n-1);


    }

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int d;
    cin >> d;
    // leftRotate(arr, n, d);
    lRotate(arr, n,d);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
};