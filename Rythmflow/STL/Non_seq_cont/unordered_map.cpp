#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{

    unordered_map<string, int> m;
    // unsorted data 
    //insert , erase count  = O(1)//avg case  rare case O(n);zxsxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxz
   
    m.emplace("TV", 11);
    m.emplace("Laptop", 20);
    m.emplace("Mobiles",30);
    m.emplace("Chargers", 40);
    m.emplace("Tablet", 50);
    m.emplace("Mic", 140);

    for(auto p : m) {
        cout << p.first << " : " << p.second<<endl;
    }

     
    return 0;
};