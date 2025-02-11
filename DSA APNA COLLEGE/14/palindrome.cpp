#include<iostream>

using namespace std;
bool isPalindrome(string s){
// int p=0, q;
//  q = s.length();
//  for(int i=0;i<q;i++){
//     if(s[p]==s[q]){
//         p++;q--;
//     }else{
//         return false;
//     }
//  }
//     return true;

int p =0;
int q = s.length()-1;// start from last character 
while( p  < q){
    if(s[p]!=s[q]){
        return false;
    }
    p++;q--;
}
return true;

}
int main()
{
    // string s = "madam";
    string s = "rotate";

   bool r = isPalindrome(s);

    if(r){
        cout << "given string is palindrome "<<endl;
    }
    else{
        cout << "given string is not  palindrome "<<endl;

    }

     
    return 0;
};