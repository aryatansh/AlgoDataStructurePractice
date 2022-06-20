// 1464. Maximum Product of Two Elements in an Array
// Easy

// 665

// 115

// Add to List

// Share
// Given the array of integers nums, you will choose two different indices i and j of that array. Return the maximum value of (nums[i]-1)*(nums[j]-1).

// Example 1:

// Input: nums = [3,4,5,2]
// Output: 12
// Explanation: If you choose the indices i=1 and j=2 (indexed from 0), you will get the maximum value, that is, (nums[1]-1)*(nums[2]-1) = (4-1)*(5-1) = 3*4 = 12.
// Example 2:

// Input: nums = [1,5,4,5]
// Output: 16
// Explanation: Choosing the indices i=1 and j=3 (indexed from 0), you will get the maximum value of (5-1)*(5-1) = 16.
// Example 3:

// Input: nums = [3,7]
// Output: 12

class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {
        int highest = INT_MIN, secondHighest = INT_MIN, lowest = INT_MAX, secondLowest = INT_MAX;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > highest)
            {
                secondHighest = highest;
                highest = nums[i];
            }
            else if (nums[i] > secondHighest)
            {
                secondHighest = nums[i];
            }

            if (nums[i] < lowest)
            {
                secondLowest = lowest;
                lowest = nums[i];
            }
            else if (nums[i] < secondLowest)
            {
                secondLowest = nums[i];
            }
        }

        return max((highest - 1) * (secondHighest - 1), (lowest - 1) * (secondLowest - 1));
    }
};