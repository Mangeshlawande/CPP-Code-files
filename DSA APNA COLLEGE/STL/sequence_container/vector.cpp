#include<iostream>
#include<vector>
using namespace std;


void display(vector<int> &v) {
    for (int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
        // cout<<v.at(i)<<" ";// another method to access vec element 

    }
    cout <<endl;

};

vector<int> setData( vector<int> v, int size){
    int element;
     for(int i = 0; i<size; i++){
        cout <<"Enter an element to add this vector :";
        cin>>element;
        v.push_back(element);  
    }
    v.pop_back();
return v;
};


int main()
{

    vector<int> vec1;
    int  size;
    // cout<<"Enter the size of vector : "<<endl;
    // cin>>size;
//    vec1 = setData(vec1,size);
    vec1.push_back(33);
    vec1.push_back(12);
    vec1.push_back(34);
    vec1.push_back(13);
    vec1.push_back(84);

    display(vec1);
    vector<int> :: iterator iter = vec1.begin();
    // vec1.insert(iter +1, 556);
    vec1.insert(iter +1, 5,556);
    // vec1.pop_back();
    display(vec1);

    return 0;
};