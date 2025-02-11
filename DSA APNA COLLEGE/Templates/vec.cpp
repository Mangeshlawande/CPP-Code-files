#include<iostream>
#include<vector>
using namespace std;

int main ()
{
    vector<int> v1;
v1.push_back(10);
v1.push_back(20);
v1.push_back(30);
v1.push_back(40);
v1.push_back(50);
v1.push_back(60);


// v1.pop_back();
// v1.pop_back();
// v1.pop_back();


// begin fun only points karta hai
v1.begin();// it generate metadata(size,address, info) for first block;
// it gives iterator(pointer )type of data
//iterator vector ka hi hissa hai


// for (int i = 0; i < 6; i++)
// for (int i = 0; i < v1.capacity(); i++)
for (int i = 0; i < v1.size(); i++)
{
    cout<<v1[i]<<" ";
}
cout<<endl;
    return 0;
}