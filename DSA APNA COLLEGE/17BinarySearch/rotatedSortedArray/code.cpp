/*
Search in rotated sorted array
ascending order ,    [2,3,4,5,7,9,11,12,15,17]; target = 11;
binary search

*/
#include <iostream>
#include <vector>

using namespace std;

int search(vector<int> &nums, int target)
{
    int n = nums.size()-1;
    int st = 0, end = n;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;

        if (nums[mid] == target)
        {
            return mid;
        }
        if (nums[st] <= nums[mid])
        { // left sort
            if (nums[st] <= target && target<= nums[mid])
            { // left binary sort
                end = mid - 1;
            }
            else
            {
                st = mid + 1;
            }
        }
        else
        {
            if (nums[mid] <= target && target <= nums[end])
            {
                st = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    vector<int> nums = {3, 4, 5, 6, 7, 0, 1, 2};
    int target = 0;
    int r;
    r = search(nums, target);
    cout << r<<endl;


    return 0;
};