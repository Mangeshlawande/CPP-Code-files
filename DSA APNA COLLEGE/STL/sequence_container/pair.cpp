#include<iostream>
#include<vector>
using namespace std;

int main()
{
    //  pair<int,int> p = {1,5};
    //  pair<int, string> q = {101, ": sona"};
    //  pair<int, pair<string, int>> r = {1,{"sourabh", 101}};

    //  cout << p.first<<" "<<p.second<<endl;
    //  cout << q.first<<" "<<q.second<<endl;
    //  cout << r.second.first<<" "<<r.second.second<<endl;
    //  cout <<r.second.second<<endl;

//  create a vector of pairs 
vector <pair<int, string>> vec = {{1,"Shivangi"}, {22,"Sona"}, {33,"Shradha"}};

// to insert vector pair use {}
vec.push_back({44, "Aabha"});
vec.emplace_back(55, "komal");// emplace is more efficient and faster
vec.emplace_back(12, "kalyani");
vec.emplace_back(13, "kanika");
vec.emplace_back(14, "bhagyashree");
vec.emplace_back(15, "dhanashree");

// for(pair <int,string> p: vec) {
for(auto p: vec) {
    cout << p.first << " : "<<p.second<<endl;
}
cout<< endl;

    return 0;
};