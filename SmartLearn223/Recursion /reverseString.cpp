#include<iostream>
#include<vector>
using namespace std;

 void reverseString(vector<char>& s) {
        // int i{0}, j= s.size()-1;
        // for(i=0; i<s.size()/2; i++){
        //     swap(s[i], s[j]);
        //     j--;
        // }  

        // for(int i=0;i<s.size();i++){
        //     cout<< s[i]<<" ";
        // }
        // cout<<endl;

/*
         int n = (int)s.size();
        for(int i = 0; i<n/2; i++)
        {
            int temp = s[i];
            s[i]= s[n-i-1];
            s[n-i-1] = temp;
        }
        */

         int st =0, end = s.size()-1;
       while(st<end){
        swap(s[st++], s[end--]);
       }

    }

    void printStr(vector<char>s){
        int n= s.size()-1;
        for(int i=0;i<n;i++){
            cout<< s[i]<<"";
        }
        cout<<endl;
    }

int main()
{
    vector<char> s ={'p','r','e','p','a','r','e','\0'};
     reverseString(s);
     printStr(s);
    return 0;
};