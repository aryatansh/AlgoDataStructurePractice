// Given an array of non-negative integers nums, you are initially positioned at the first index of the array.

// Each element in the array represents your maximum jump length at that position.

// Determine if you are able to reach the last index.

// Example 1:

// Input: nums = [2,3,1,1,4]
// Output: true
// Explanation: Jump 1 step from index 0 to 1, then 3 steps to the last index.
// Example 2:

// Input: nums = [3,2,1,0,4]
// Output: false
// Explanation: You will always arrive at index 3 no matter what. Its maximum jump length is 0, which makes it impossible to reach the last index.

// Constraints:

// 1 <= nums.length <= 104
// 0 <= nums[i] <= 105

//Approach -Dynamic Programming top down
bool canJumpFromPosition(vector<int> &nums, int index, vector<int> &mem)
{

    if (mem[index] != 0)
    {
        return mem[index] == 2 ? true : false;
    }
    int farthest = ((index + nums[index]) > (nums.size() - 1)) ? nums.size() - 1 : index + nums[index];
    for (int next = index + 1; next <= farthest; next++)
    {
        if (canJumpFromPosition(nums, next, mem))
        {
            mem[index] = 2;
            return true;
        }
    }
    mem[index] = 1;
    return false;
}
//0 for unknown,1 for bad ,2 for good
bool canJump(vector<int> &nums)
{
    vector<int> mem(nums.size(), 0);
    mem[mem.size() - 1] = 2;
    return canJumpFromPosition(nums, 0, mem);
}

//Approach - Dynamic Programming bottom up
//0 for unknown,1 for bad ,2 for good
bool canJump(vector<int> &nums)
{
    vector<int> mem(nums.size(), 0);
    mem[mem.size() - 1] = 2;

    for (int i = nums.size() - 1; i >= 0; i--)
    {
        int farthest = ((i + nums[i]) > (nums.size() - 1)) ? nums.size() - 1 : i + nums[i];
        for (int j = i + 1; j <= farthest; j++)
        {
            if (mem[j] == 2)
            {
                mem[i] = 2;
                break;
            }
        }
    }

    return (mem[0] == 2) ? true : false;
}

//Approach- Backtracking
bool canJump(vector<int> &nums)
{
    return canJumpBackTracking(nums, 0);
}
bool canJumpBackTracking(vector<int> &nums, int index)
{
    if (index >= nums.size())
    {
        return false;
    }
    if (index == nums.size() - 1)
    {
        return true;
    }
    for (int i = 1; i <= nums[index]; i++)
    {

        bool can = canJump(nums, index + i);
        if (can)
        {
            return true;
        }
    }
    return false;
}
