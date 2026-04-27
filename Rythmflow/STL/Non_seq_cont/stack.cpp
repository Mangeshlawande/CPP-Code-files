#include<iostream>
#include<stack>
#include<list>

using namespace std;

int main()
{ 
    stack <int> s ;
    s.push(1);
    s.push(2);
    s.push(4);
    s.push(8);

    // cout << s.top() <<endl;
    // s.pop();
    // cout << s.top() <<endl;

    list<int> l= {8,16,32,64,128};
    stack <int> s2 ;
    s2.swap(s);

    cout << " s size : " << s.size() << endl;//0
    cout << " s2 size : " << s2.size() << endl;// 4

    // while(!s.empty()) {
    //     cout<<s.top()<<" ";
    //     s.pop();
    // }
    cout <<endl;
    return 0;
};