#include<iostream>
#include<map>
using namespace std;

int main()
{
    multimap<string, int> m;
    m.emplace("TV", 17);
    m.emplace("TV", 11);
    m.emplace("TV", 11);
    m.emplace("Laptop", 20);
    m.emplace("Mobiles",30);
    m.emplace("Chargers", 40);
    m.emplace("Tablet", 50);
    m.emplace("Mic", 140);
    m.insert({"Buds", 46});
    // m.erase("TV");

// to delete only one instance of tv
    //iterator = actual memory location 
    m.erase(m.find("TV"));
//print in sorted order of keys in asc 
//

    if(m.find("Mic")!= m.end()){
        cout<< "Found \n";
    }else{
        cout<< "Not Found\n";
    }
    for(auto p : m) {
        cout << p.first << " : " << p.second<<endl;
    }

    // insert, emplace, count (returns number of keys exist in map)
    // erase , find, size, empty;
    cout<< "laptop key count = "<< m.count("Laptop")<<endl;
     
    return 0;
};