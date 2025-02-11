#include<iostream>
#include<vector>
#include<climits>
using namespace std;
// return maximum amount of water container can store .

 int maxArea( vector<int>& height ){
    int maxWater = 0; // ans 
    int rp = height.size()-1;
    int lp =0;
    while (lp < rp){
        int w = rp-lp;
        int ht = min(height[lp], height[rp]);
        int currWater = w * ht;
        maxWater= max(currWater, maxWater);

        if(height[lp] < height[rp]){
            lp ++;
        }
        else{
            rp--;
        }
    }
    
    return maxWater;


    // int n = height.size();

    // for(int i=0; i<n; i++) {
    //     for(int j=i+1; j<n; j++){
    //         int w = j-i;
    //         int ht = min(height[i], height[j]);
    //         int area = w * ht;
    //         maxWater= max(maxWater, area);

    //     }
    // }
    // return maxWater;

 };
int main()
{
    vector <int> height = {1,8,6,2,5,4,8,3,7};

     cout <<"The maximum amount of water container can store : "<< maxArea(height)<<" units."<<endl;
    return 0;
};