# include <iostream>
#include <conio.h>
using namespace std ;


    int main() {
        int a[20]; // = {2,3,5,6,8,10,14,16,18,19,21,24,34,36};
        int l=0, r , m,search,i,N;
        cout <<"Enter a range :";
        cin>> N;
        r = N -1;
        cout<< "Enter "<<N<<" Numbers:";
        for (int i = 0; i < N; i++)
        {
            cin>>a[i];
        }
        
        cout<<"Enter a number that you want to search:";
        cin>>search;
        while(l<=r){
            m = (l+r)/2;

            if (a[m]==search)
            {
                cout<<"Number is Found at position "<<m+1;
                break;
            }
            else if (a[m]>search)
            {
                r= m-1;
            }
            else if (a[m]<search)
            {
                l = m+1;
            }
            
        }
        if (l>r){
            cout << "Number is not found!!";
        }
    
    return 0;
}