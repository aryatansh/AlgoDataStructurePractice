// 217. Contains Duplicate
// Easy

// 2547

// 884

// Add to List

// Share
// Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

// Example 1:

// Input: nums = [1,2,3,1]
// Output: true
// Example 2:

// Input: nums = [1,2,3,4]
// Output: false
// Example 3:

// Input: nums = [1,1,1,3,3,4,3,2,4,2]
// Output: true

// Constraints:

// 1 <= nums.length <= 105
// -109 <= nums[i] <= 109
// Accepted
// 999,192
// Submissions
// 1,702,300

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        set<int> t;
        for (int i = 0; i < nums.size(); i++)
        {
            if (t.find(nums[i]) != t.end())
            {
                return true;
            }
            t.insert(nums[i]);
        }

        return false;
    }
};