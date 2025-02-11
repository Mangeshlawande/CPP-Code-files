#include<iostream>
using namespace std;

int totalChaiServed(int chai[], int size){
    int total = 0;
    for (int i = 0; i < size; i++)
    {
        total +=chai[i];
    }
    return total;

}

int main()
{
     int chaiserved[7] = {50,21,1,10,20,30,32};
     cout<< totalChaiServed(chaiserved, 7)<<endl;
    return 0;
};