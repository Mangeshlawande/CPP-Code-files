/*


dynaimc in nature
   2D vectors advantage : store extra element in particular rows
   can store different row size to each row 

*/
#include<iostream>
#include<vector>
using namespace std;

int main()
{
     vector<vector<int>>mat = {
     {1, 2, 3}, 
     {4, 5, 6,17,18},
     {7, 8, 9}
     };

     cout<< mat[0][0]<<endl;
    int rows = 3 , cols =3;
    //  calculate dynamic size 
    // rows => mat.size();
    //  cols => 1 rows kitne elements { mat[i].size();  }

    cout << " matrix size or rows size : " << mat.size()<<endl;
    cout << " matrix  colums size : " << mat[0].size()<<endl;

     for(int i=0; i< mat.size(); i++){
        for(int j=0; j<mat[i].size();j++){
            cout<< mat[i][j]<<" ";
        }
        cout<< endl;
     }
    return 0;
};