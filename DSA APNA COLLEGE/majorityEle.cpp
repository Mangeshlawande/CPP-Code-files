#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

int majorityElement(vector<int> nums)
{
   
    int n = nums.size();
    // moore's algorithms O(n);
    int freq = 0 , ans = 0;
    for(int i=0; i<n; i++) {
        if(freq == 0 ) { 
            ans = nums[i] ;
        }
        if(ans == nums[i]){
            freq ++;
        }else{
            freq--;
        }
    }
    return ans;


    /*
    // sorting O(nlogn);=> nlogn + n

    // sort
    std::sort(nums.begin(), nums.end());

    //freq count 
    int freq =1, ans = nums[0];
    for(int i=1; i<n; i++){
        if(nums[i] == nums[i-1]){
            freq ++;
        }
        else{
            freq = 1; 
            ans = nums[i];
        }
        if(freq> n/2){
            return ans;
        }
    }
    */


    /*
    // bruthforce O(n^2)
    for (int val : nums)
    {

        int freq = 0;
        for (int ele : nums)
        {
            if (ele == val)
            {
                freq++;
            }
        }
        if (freq > n / 2)
        {
            return val;
        }
    }
    return -1;
    */
};

int main()
{
    vector <int> nums = {1,2,1,1,1,2,2};
    cout << majorityElement(nums) <<endl;
    return 0;
};

