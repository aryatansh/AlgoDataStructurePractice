// Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

// We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

// You must solve this problem without using the library's sort function.

 

// Example 1:

// Input: nums = [2,0,2,1,1,0]
// Output: [0,0,1,1,2,2]
// Example 2:

// Input: nums = [2,0,1]
// Output: [0,1,2]
// Example 3:

// Input: nums = [0]
// Output: [0]
// Example 4:

// Input: nums = [1]
// Output: [1]
 

// Constraints:

// n == nums.length
// 1 <= n <= 300
// nums[i] is 0, 1, or 2.
 

// Follow up: Could you come up with a one-pass algorithm using only constant extra space?

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> &nums = {1, 0, 2, 1};
    int i = 0;
    int p1 = 0;
    int p2 = nums.size() - 1;
    int pivot = 1;
    while (i <= p2)
    {
        if (nums[i] < pivot)
        {
            swap(nums[i], nums[p1]);
            i++;
            p1++;
        }
        else if (nums[i] > pivot)
        {
            swap(nums[i], nums[p2]);
            p2--;
        }
        else
        {
            i++;
        }
    }
}