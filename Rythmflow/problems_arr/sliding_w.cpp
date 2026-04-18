#include <iostream>
#include <bits/stdc++.h>

using namespace std;

/**
Problem Statement:
 Given an array of integers arr, there is a sliding window of size k which is moving from the very left of the array to the very right. You can only see the k numbers in the window. Each time the sliding window moves right by one position. Return the max sliding window..

1. Loop through the array from index 0 to (length - window size)
2. For each iteration, extract the subarray of window size
3. Scan through that subarray to find the maximum element
4. Store the maximum in the result array
5. After the loop ends, return the result array

 */

class Solution
{
public:
    /*
     vector<int> maxSlidingWindow(vector<int> &nums, int k)
     {
         vector<int> result;

         for (int i = 0; i <= nums.size() - k; i++)
         {
             int maxVal = nums[i];

             for (int j = i; j < i + k; j++)
             {
                 maxVal = min(maxVal, nums[j]);
             };

             // append the max of this window to the result
             result.push_back(maxVal);
         }
         return result;
     }
         */
    // optimal
    //
    vector<int> maxSlidingWindow(vector<int> &nums, int k)
    {
        // store indices of useful element
        deque<int> dq;

        // result vector to store maximums
        vector<int> result;

        // loop through each
        for (int i = 0; i < nums.size(); i++)
        {
            // remove element from front ifthey are out of window range ;
            if (!dq.empty() && dq.front() <= i - k)
            {
                dq.pop_front();
            }

            // remove all elements from the back that are smaller than current element;
            while (!dq.empty() && nums[dq.back()] < nums[i])
            {
                dq.pop_back();
            }

            // add the current index to dq
            dq.push_back(i);

            // once the first window is completed, add front element to the result

            if (i >= k - 1)
            {
                result.push_back(nums[dq.front()]);
            }
        }
        return result;
    }
};

// Driver code

int main()
{
    Solution obj;
    // vector<int> arr = {4, 0, -1, 3, 5, 3, 6, 8};
    // vector<int> arr = {10, 3, 2, 1, 5, 4};
    vector<int> arr = {1, 3, 1, 2, 0, 5};
    int k = 3;

    vector<int> ans = obj.maxSlidingWindow(arr, k);

    for (int num : ans)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
};
