#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<string, int> m;
    m["TV"]= 17;
    m["Laptop"]= 20;
    m["Mobiles"]= 30;
    m["Chargers"]= 40;
    m["Tablet"]= 50;
    m["Mic"]= 140;
    m.insert({"Buds", 46});
    m.erase("TV");
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
    cout<< "laptop count = "<< m["Laptop"]<<endl;
     
    return 0;
};