#include <iostream>
#include <vector>
using namespace std;

// not use divide operator

vector<int> productExceptSelf(vector<int> nums) {
/*
    int n = nums.size();
    vector<int> ans(n,1);

    for(int i=0;i<n;i++){
        for(int j=0; j<n;j++){
            if(i!=j){
                ans[i] *= nums[j];
            }
        }
    }
    return ans;
*/



/*
    int n = nums.size();
    vector<int>prefix(n,1);
    vector<int>suffix(n,1);
    vector<int>ans(n,1);

    //prefix iteration 
    for(int i=1; i<n;i++){ 
        prefix[i] = nums[i-1] * prefix[i-1];
    }

    // suffix iteration 
    for(int i=n-2;i>=0;i--){
        suffix[i] = nums[i+1] * suffix[i+1];
    }

    for(int i=0;i<n;i++){
        ans[i] = prefix[i] *suffix[i];
    }
    return ans;
    */

   int n = nums.size();
   vector<int> ans(n,1);

//    prefix =>ans 
for(int i = 1; i<n; i++){
    ans[i] = ans[i-1] * nums[i-1]; 
}

int suffix =1;
for(int i=n-2; i>=0; i--){
    suffix *= nums[i+1];
    ans[i] *= suffix;
}

return ans ;

};

void printArray(vector<int> &nums, int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
};

int main()
{
    vector<int> nums = {1, 2, 3, 4};
    int n = nums.size();
    vector<int> ans(nums.size(), 1);

    printArray(nums, n);
    ans = productExceptSelf(nums);
    printArray(ans, n);

    return 0;
};