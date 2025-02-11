#include<iostream>
#include<deque>
using namespace std;

int main()
{
    // deque = double ended queue;
    // dequeue[generic word to delete an element  ] = pop element from queue
    deque<int> d = {1,2,4,8,16};

    for(int val : d){
        cout << val << " ";
    }
    cout <<endl;
    cout << d[3]<<endl;
    
     
    return 0;
};