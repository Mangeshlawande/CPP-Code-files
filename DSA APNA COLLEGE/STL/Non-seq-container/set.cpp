#include<iostream>
#include <set>
using namespace std;

int main()
{
     // set similar to map (internally use self balancing tree ) work O(logn)
     // store unique values, in particular sorted order, 
     // insert , emplace ,eras,e find, size, empty
     // lower_bound (val); ret min value upto val or value should not be less than key
     // upper_bound (val);//  value should greater than key


     set<int> s;
     s.insert(1);
     s.insert(4);
     s.insert(2);
     s.insert(3);
     s.insert(5);
     s.insert(6);
     
    // cout << " Set lower_bound : "<< *(s.lower_bound(4))<<endl;// return an iterator need to dereference it(*)
    cout << " Set lower_bound : "<< *(s.lower_bound(13))<<endl;// end()
    cout << " Set size : "<< s.size()<<endl;
    for(auto val : s){
        cout << val << " ";
    }
 cout << endl;
 
    return 0;
};