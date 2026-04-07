/**
 * Algorithm: 
 * Containers;
 * Iterators;
 * fuctions
 * 
 * 
 */
#include<iostream>
#include<vector>
#include<list>
#include<set>
#include<map>
#include<algorithm>
#include<iterator>
#include<deque>
#include<stack>
#include<queue>
#include<unordered_set>
#include<unordered_map>





using namespace std;


// pairs

// A pair is a simple container to store two heterogeneous objects.
// It is defined in the <utility> header file.


void ExplainPair(){

    // pair<int, string> p1(1, "one");
    // cout << "Pair: " << p1.first << ", " << p1.second << endl;

    // pair<int, string> p2 = make_pair(2, "two");
    // cout << "Pair: " << p2.first << ", " << p2.second << endl;
    // pair<int, int> p = {1, 2};


    pair<int, string> p3[] = {{101, "harry"},
                              {102, "rohan"},
                              {103, "shubham"}
                            };

    cout << "Array of Pairs->" << endl;
    for (const auto& p : p3) {
        cout << "Pair:-> " << p.first << " : " << p.second << endl;
    };


    // // Using pair in a vector
    // vector<pair<int, string>> vec;
    // vec.push_back(p1);
    // vec.push_back(p2);

    // for (const auto& p : vec) {
    //     cout << "Vector Pair: " << p.first << ", " << p.second << endl;
    // };

    // // Using pair in a map
    // map<int, string> m;
    // m.insert(p1);
    // m.insert(p2);

    // for (const auto& p : m) {
    //     cout << "Map Pair: " << p.first << ", " << p.second << endl;
    // }   

    // pair<int, pair<string, double>> nestedPair = make_pair(1, make_pair("Aditya", 50000.0));

    // cout << " EmpId: " << nestedPair.first << ", EmpName " 
    //      << nestedPair.second.first << ", EmpSalary: " 
    //      << nestedPair.second.second << endl;

    // // Using pair in a set
    // set<pair<int, string>> s;
    // s.insert(p1);
    // s.insert(p2);

    // for (const auto& p : s) {
    //     cout << "Set Pair: " << p.first << ", " << p.second << endl;
    // }   

    // // Using pair with custom comparator in a set
    // set<pair<int, string>, greater<pair<int, string>>> s2;
    // s2.insert(p1);
    // s2.insert(p2);

    // for (const auto& p : s2) {
    //     cout << "Set Pair with custom comparator: " << p.first << ", " << p.second << endl;
    // };

    // // Using pair with custom comparator in a map
    // map<pair<int, string>, double> m2;
    // m2[make_pair(1, "one")] = 100.0;
    // m2[make_pair(2, "two")] = 200.0;

    // for (const auto& p : m2) {
    //     cout << "Map Pair with custom comparator: " << p.first.first << ", " 
    //          << p.first.second << ", Value: " << p.second << endl;
    // };


};

// template <class T>
// template<class T1, class T2>
void explainVector(){

    vector <int>v1 = {3,4,5,6};

   
    
    
    vector<int> v2(v1); // copy 

//     cout<<"Vector v2::\n";
//    for(auto v : v1 ){
//        cout << v<<" ";
//    };
//    cout<<endl;

    v1.push_back(1);
    v1.emplace_back(2);//emplace_back is faster than push_back

    //   cout<<"Vector v1::\n";
    // for(auto v : v1 ){
    //     cout << v<<" ";
    // };

    // vector<pair<int, string>> vec;
    // vec.push_back({1, "Harry"});
    // vec.emplace_back(2,"Krilin"); // assume object implicity;


    // cout<<"Vector ::\n";
    // for(auto v1 : vec ){
    //     cout << v1.first<<" : "<< v1.second<<endl;
    // };

    // vector<int> v1 (5, 20);


    // vector<int> :: iterator it = v1.begin();
    // it++;
    // cout<< *(it)<<" ";

    // it = it + 2;
    // cout<< *(it)<<" "<<endl;


    vector<int> :: iterator it = v1.end();


    // vector<int> :: iterator it = v1.rbegin();

    cout<<"v1[0] : "<<v1[0] << " = "<<" v1.at(0) : "<< v1.at(0)<<endl;
    cout<< v1[0] << " = "<< v1.at(0)<<endl;
    // cout<< "v1.back() : "<<v1.back()<< " \n";

    // for(vector <int>::  iterator it = v1.begin(); it != v1.end(); it++){
    //     cout << *(it)<<" ";
    // };

    // cout<<endl;
    
    // cout<<"using auto keyword: "<<endl;
    // for(auto it = v1.begin(); it != v1.end(); it++){
    //     cout << *(it)<<" ";
    // };
    
    // cout<<endl;

    // v1.erase(v1.begin()+2);
    // v1.erase(v1.begin(), v1.begin()+ 2);

    // Insert function ::

    vector<int> v (2,100);// {100, 100 };

    v.insert(v.begin(), 300);// {300, 100, 100 };
    v.insert(v.begin()+1, 2, 10);// {300,10,10, 100, 100 };

    vector<int> copy(2, 50); //{50, 50};

    v.insert(v.begin(), copy.begin(), copy.end());//{50, 50, 300,10,10, 100, 100 };

    // {10, 20 }
    cout<< v.size();//2

    v.pop_back(); // {10};

    // v1 -> {10, 20};
    // v2 -> {30, 40};

    v1.swap(v2);

    v.clear();

    cout<<v1.empty();

};

void explainList(){

    list <int> ls;
    ls.push_back(2);
    ls.push_front(4);

    ls.emplace_front(5);
    ls.emplace_back(8);

    // rest functions same as vector
 // begin, end, rbegin, rend, clear, insert, size, swap,

/*

Doubly Linked List:
std::list is implemented as a doubly linked list, allowing efficient insertion and deletion from both ends and from the middle.

No Random Access:
You cannot access elements by index (e.g., list[2] is invalid). Access is only possible through iterators.

Efficient Insertions/Deletions:
Insertions and deletions at any position (front, back, or middle) are efficient (constant time if the position is known).

Bidirectional Iterators:
Supports bidirectional iterators (begin(), end(), rbegin(), rend()), but not random access iterators.

Dynamic Size:
The size of the list can grow or shrink dynamically as elements are added or removed.

Standard Operations:

push_front(), push_back(), emplace_front(), emplace_back()
pop_front(), pop_back()
insert(), erase(), clear(), size(), swap(), empty()
Summary:
A std::list allows fast insertions and deletions anywhere, but does not support random access. It is best used when you need frequent insertions/deletions in the middle of the sequence.

*/

};

void explainDeque(){
    deque<int>dq;
    dq.push_back(1);
    dq.emplace_back(2);
    dq.push_front(4);
    dq.emplace_front(9);

    dq.pop_back();
    dq.pop_front();

    // dq.back();
    // dq.front();

      // rest functions same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap,

    /*
    
    Double-Ended Access:
Elements can be inserted or removed from both the front and the back efficiently.

Random Access:
Supports direct access to any element using an index (like a vector).

Dynamic Size:
The size of a deque can grow or shrink dynamically as elements are added or removed.

No Capacity Limit:
Deques automatically manage their storage; you don’t need to specify a maximum size.

Efficient Operations:

push_front(x), emplace_front(x): Insert at the front.
push_back(x), emplace_back(x): Insert at the back.
pop_front(): Remove from the front.
pop_back(): Remove from the back.
Other Operations:

front(), back(): Access the first and last elements.
begin(), end(), rbegin(), rend(): Iterators for traversal.
insert(), erase(), clear(), size(), swap(), empty(): Standard container operations.

Summary:
A deque allows fast insertion and deletion at both ends, supports random access, and is a flexible, dynamic container.

    */
};


void explainStack(){
    // lifo

    stack<int> st;
    st.push(3);
    st.push(5);
    st.push(6);
    st.push(9);
    st.push(8);
    st.emplace(1);

    cout<< st.top();

    st.pop();

    cout<<st.top();

    cout<<st.size();
    cout<< st.empty();


    stack<int> st1, st2;
    st1.swap(st2);
     cout << "Stack (top to bottom): ";

    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
   
/* 
# LIFO Principle:

# Basic operation:
    1.push(x);
    2.pop();
    3.top() or peek();
    4. empty();
    5. size();
#.No Random Access:
    You cannot access elements by index or iterate through a stack directly.

#Only Top Accessible:
    Only the top element can be accessed, inserted, or removed.

# Fixed or Dynamic Size:
    Stack can have a fixed size (array implementation) or dynamic size (linked list or STL stack).  


#No Direct Traversal:
    To access all elements, you must pop each one (which empties the stack).

*/
    

};

void explainQueue(){

    queue<int> q;

    q.push(2);
    q.push(3);
    q.emplace(5);
    q.back() +=4;

    cout<<q.back();
    cout<<q.front();
    q.pop();
    cout<<q.front();
    // size ,swap, empty same as stack 


    /*

    FIFO Principle:
Queue works on First-In-First-Out (FIFO). The first element added is the first to be removed.

Basic Operations:

push(x) or enqueue(x): Add element x to the back of the queue.
pop() or dequeue(): Remove the element from the front.
front(): Access the front element.
back(): Access the last element.
empty(): Check if the queue is empty.
size(): Get the number of elements.
No Random Access:
You cannot access elements by index or iterate through a queue directly.

Only Front and Back Accessible:
Only the front and back elements can be accessed directly.

Dynamic Size:
The size of the queue can grow or shrink dynamically as elements are added or removed.

Summary:
A queue allows fast insertion at the back and removal from the front, following FIFO order. Only the front and back elements are directly accessible.

    */
};

 void explainPQ(){
    // stored in sorted order
    // every element is unique;
    //for max heap 

    /*
    Element Priority:
Elements are ordered by priority, not by insertion order. By default, the largest element has the highest priority (max-heap).

Access to Top Element:
Only the element with the highest priority (top) can be accessed or removed directly using top() and pop().

Basic Operations:

push(x) / emplace(x): Insert element x into the queue.
pop(): Remove the top (highest priority) element.
top(): Access the top element.
empty(): Check if the queue is empty.
size(): Get the number of elements.
No Random Access:
You cannot access elements by index or iterate through a priority queue directly.

Custom Priority:
You can define custom priority (e.g., min-heap) using comparators.

Dynamic Size:
The size of the priority queue can grow or shrink dynamically as elements are added or removed.

Summary:
A priority queue always keeps the highest (or lowest, with custom comparator) priority element at the top, allowing fast access, insertion, and removal of the top element only.
    */

    priority_queue <int> pq;
    pq.emplace(10);
    pq.push(8);
    pq.emplace(14);
    pq.emplace(8);
    pq.push(6);
    
    // cout<< pq.top()<<endl;

    
    // cout<<pq.top()<<endl;
    

    while (pq.empty()!= true)
    {
        cout<<pq.top()<<" ";
        pq.pop();

    };
    cout<<endl;

    // minimum heap example () 
    priority_queue<int, vector<int>, greater<int>> min_pq;
    min_pq.push(17);
    min_pq.push(15);
    min_pq.push(15);
    min_pq.push(12);
    min_pq.emplace(21);

    cout<< "Priority Queue (min-heap) : \n";
    while (!min_pq.empty())
    {
       cout<< min_pq.top()<<" ";
       min_pq.pop();
        
    };
    cout<<endl;

 };


void explainSet(){
/*
1. unique element:: duplicate not allowed 

2. ordered Elements: element are stored in sorted order by default (ascending)

3. No direct Access by index like set[3] is invalid 

4. Underlying Structure:
usually implemented balanced binary search tree(like red black tree)

Standard Operations:: 

insert(x): Insert element x into the set.

erase(x): Remove element x from the set.

find(x): Returns iterator to x if present, else end().
count(x): Returns 1 if x is present, else 0.

size(): Returns the number of elements.

empty(): Checks if the set is empty.

clear(): Removes all elements.

begin(), end(): Iterators for traversal.

lower_bound(x), upper_bound(x): Returns iterator to the first element not less than/greater than x.
*/

set<int> st;
st.insert(14);
st.insert(14);
st.insert(21);
st.insert(18);
st.insert(12);
st.insert(9);
st.insert(13);

// auto it  = st.find(13); // returns an iterator, points to 13

// auto it = st.find(11); // reach st.end() , if elements is not in the set;
st.erase(9);

int cnt = st.count(9);

cout<< cnt<<endl;

// auto it = st.find(21);
// cout<<*(it)<<endl;
//  st.erase(it);

 auto it1 = st.find(1);
 auto it2 = st.find(2);
 st.erase(it1, it2);// erase every thing bw 2 and 4

auto it3 = st.lower_bound(21);
auto it4 = st.upper_bound(12);

};


void explainMultiSet(){
    /*
    everything is same as set;
    can stores duplicate element 

    */

    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(12);
    ms.insert(11);

    // ms.erase(1);// all 1's erased

    int cnt = ms.count(1);

    ms.erase(ms.find(1)); //only single one erased 

    // ms.erase(ms.find(1), ms.find(1)+2);

    // rest all function same as set;

};

void explainUSet(){
    unordered_set<int> st;

    /*
    1. stored unique element, not  in sorted order

    Unique Elements:

All elements are unique; duplicates are not allowed.

No Order:
Elements are not stored in any particular order (not sorted).

Hash Table Implementation:
Internally uses a hash table for fast operations.

No Direct Access by Index:
You cannot access elements by index (e.g., st[2] is invalid).

Average Constant Time Operations:
Insertion, deletion, and search are on average O(1) time.

Standard Operations
insert(x): Insert element x.
erase(x): Remove element x.
find(x): Returns iterator to x if present, else end().
count(x): Returns 1 if x is present, else 0.
size(): Number of elements.
empty(): Checks if empty.
clear(): Removes all elements.
begin(), end(): Iterators for traversal.
Summary:
An unordered_set stores unique elements in no particular order, providing very fast insertion, deletion, and lookup using hashing.

    
    */
};

void explainMap(){
    /// map stores unique key in sorted order 

    map<int, int>mpp;
    map<int, pair<int, int>>mp1;
    map<pair<int,int>, int>mp2;

    mpp[1]=21;
    mpp.insert({3,11});
    mpp.emplace(2,12);

    mp2[{4,31}] = 10;

    for(auto it : mpp){
        // cout<< it.first << "-> "<<it.second <<endl;
    };

    // cout << mpp[{1}]<<endl;
    // cout << mpp[3]<<endl;

    auto it = mpp.find(2);
    // cout<< *(it).second;
    
    
    auto it = mpp.find(5);// mpp.end()->after the map

    auto it = mpp.lower_bound(2);

    auto it = mpp.upper_bound(3);

    //erase ,swap size, empty, all are same 


};

void explainMMap(){
    /*
    Everything is same as map, only difference is that multimap can store duplicate keys.

    Key-Value Pairs:
    Stores elements as key-value pairs ({key, value}).

    Duplicate Keys Allowed:
    Multiple elements can have the same key.

    Ordered by Key:
    Elements are stored in sorted order of keys.

    Underlying Structure:
    Usually implemented as a balanced binary search tree (like red-black tree).

    Standard Operations:
    insert({key, value}): Insert a key-value pair (duplicates allowed).
    erase(key): Removes all elements with the given key.
    find(key): Returns iterator to the first element with the given key.
    count(key): Returns the number of elements with the given key.
    equal_range(key): Returns a pair of iterators to the range of elements with the given key.
    size(), empty(), clear(), begin(), end(): Standard container operations.

    Summary:
    A multimap allows multiple values for the same key, with all elements sorted by key.
    */

    multimap<int, string> mmap;
    mmap.insert({1, "apple"});
    mmap.insert({2, "banana"});
    mmap.insert({1, "apricot"});
    mmap.insert({3, "cherry"});
    mmap.insert({2, "blueberry"});

    cout << "Multimap contents:\n";
    for (const auto& p : mmap) {
        cout << p.first << " -> " << p.second << endl;
    }

    // Find all values for a specific key
    int key = 2;
    auto range = mmap.equal_range(key);
    cout << "Values for key " << key << ": ";
    for (auto it = range.first; it != range.second; ++it) {
        cout << it->second << " ";
    }
    cout << endl;
};

void explainUMap(){
    unordered_map<int, string> umap;

    // Insert elements
    umap[1] = "apple";
    umap[2] = "banana";
    umap.insert({3, "cherry"});
    umap.emplace(4, "date");

    // Access elements
    cout << "umap[2]: " << umap[2] << endl;

    // Iterate and print all key-value pairs
    cout << "Unordered Map contents:\n";
    for (const auto& p : umap) {
        cout << p.first << " -> " << p.second << endl;
    }

    // Find and erase
    auto it = umap.find(3);
    if (it != umap.end()) {
        cout << "Found key 3: " << it->second << endl;
        umap.erase(it);
    }

    // Check existence
    if (umap.count(4)) {
        cout << "Key 4 exists.\n";
    }

    // Size and clear
    cout << "Size: " << umap.size() << endl;
    umap.clear();
    cout << "Empty after clear? " << umap.empty() << endl;
    /*
    Key-Value Pairs:
Stores elements as key-value pairs ({key, value}).

Unique Keys:
Each key must be unique; duplicate keys are not allowed.

No Order:
Elements are not stored in any particular order (not sorted).

Hash Table Implementation:
Internally uses a hash table for fast operations.

No Direct Access by Index:
You cannot access elements by index (e.g., umap[2] is invalid for position).

Average Constant Time Operations:
Insertion, deletion, and search are on average O(1) time.

Standard Operations
insert({key, value}): Insert a key-value pair.
erase(key): Remove the element with the given key.
find(key): Returns iterator to the key if present, else end().
count(key): Returns 1 if key is present, else 0.
size(): Number of elements.
empty(): Checks if empty.
clear(): Removes all elements.
begin(), end(): Iterators for traversal.
operator[]: Access or insert value by key.
Summary:
An unordered_map stores unique keys with associated values in no particular order, providing very fast insertion, deletion, and lookup using hashing.
    
    */
    

} ;


bool comp(pair<int, int>p1, pair<int, int> p2){
    if(p1.second < p2.second){
        return true;
    } else if(p1.second == p2.second){
        if(p1.first > p2.second) return true;
    }
    return false;
}

void explainExtra(){

};

int main() {
    // ExplainPair();
    // explainVector();
    // explainList();
    // explainDeque();
    // explainStack();
    // explainQueue();
    // explainPQ();
    // explainSet();
    explainMap();


    return 0;
};
