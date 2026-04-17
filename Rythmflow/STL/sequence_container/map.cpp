// To store key - value pair  the map is used 
#include<iostream>
#include<map>
#include<string>
using namespace std;
// map is an associative array


int main()
{
    map <string, int> marksMap;
    marksMap["Dipali "] = 88;
    marksMap["Anita "] = 80;
    marksMap["Pooja "] = 79;
    marksMap["Pragati "] = 85;
    marksMap.insert({{"Vaishnvi", 93},{"Dhanshree", 95}});
    map <string, int> :: iterator itr;
    for (itr=marksMap.begin(); itr!=marksMap.end(); itr++)
    {
        cout<<(*itr).first<<"= "<<(*itr).second<<"\n";
    }
    cout<<"The size is : "<<marksMap.size()<<endl;
    cout<<"The max size is : "<<marksMap.max_size()<<endl;
    cout<<"The empty return value is : "<<marksMap.empty()<<endl;
    
    return 0;
};