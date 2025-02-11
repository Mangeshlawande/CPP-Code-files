#include<iostream>
#include<queue>
using namespace std;

int main()
{ 
    priority_queue <int> q ;
    //smallest element on top
priority_queue<int,vector<int>, greater<int>>q1;


    q.push(1);
    q.push(2);
    q.push(4);
    q.push(8);
   cout<< q.top()<<endl;

    
    q.pop();
    cout << q.top() <<endl;

    // queue<int> q= {8,16,32,64,128};
    priority_queue <int> q2 ;
    q2.swap(q);

    cout << " q size : " << q.size() << endl;//0
    cout << " q2 size : " << q2.size() << endl;// 4

    // while(!q.empty()) {
    //     cout<<q.top()<<" ";
    //     q.pop();
    // }
    cout <<endl;
     
    return 0;
};