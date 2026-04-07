#include<iostream>
#include <cmath>
using namespace std;

int main()
{
    int nums[] = {5,15,22,1,-15, 24 };
    int sz =  sizeof(nums)/sizeof(int);

    cout<< sz<<endl;

    int smallest = __INT_MAX__;
    int large = nums[0];

    for(int i=0; i<sz; i++){
        smallest = min(nums[i], smallest);
        large = max(nums[i], large);
        
    }

    cout<<"smallest : "<<smallest<<endl;
    cout<<"Largest : " << large<<endl;

    for(int i=0; i<sz; i++){
        if(nums[i]==large){
            cout<<"largest element at index : "<< i<<endl;
        }
        if(nums[i] == smallest){
            cout<<"Smallest element at index : " << i << endl;
        }
    }

    return 0;
};