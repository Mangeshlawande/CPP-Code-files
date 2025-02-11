#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
# define M_PI 3.14159265358979323846

using namespace std;

void solve (){
    int x, y ,n;
    cin >>x>>y>>n;
    int a = n%x;
    if(a-y >=0){
        n = n-(a-y);
    }
    else{
        n = n-a-x+y;
    }
    cout << n<<"\n";
}
int main()
{
    // ios::sync_with_stdio(0);
    // cin.tie(0);
    // cout.tie(0);
    // cout<<fixed;
    // cout<< setprecision(10);
    // int t=1;
    // cin >> t;
    // for(int i=1;i<=t; i++){
    //     solve();
    // }
    cout << 23%5<<endl;// it gives remainder 
     
    return 0;
};