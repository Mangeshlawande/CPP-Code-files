#include <iostream>
#include <list>
// #include<vector>
// #include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l;
    l.push_back(2);
    l.push_front(3);
    l.push_back(1);
    l.push_front(4);

    l.pop_back();
    l.pop_front();

    list<int> l1={4,5,6,7,8};
    for (int val : l1)
    {
        cout << val << " ";
    }
    cout << endl;
    return 0;
};