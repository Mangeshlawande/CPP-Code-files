#include<iostream>
#include<vector>
using namespace std;
 
int climbingStairs(int n){
    
    if(n==0 || n==1){
        return  1;
    }
    else if(n==2){
        return 2;
    }
    else if(n==3){
        return 3;
    }
    vector<int> ans(n+1);
    ans[1] =1;
    ans[2] =2;
    ans[3] =3;
    for(int i=3; i<=n; i++){
        ans[i] = ans[i-1] + ans[i-2];
    }
    return ans[n];
}

int main()
{
     int n ;
     cout << "Enter Number of Stairs : ";
     cin >> n;
     cout<< climbingStairs(n)<<endl;

    return 0;
};
