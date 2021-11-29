class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> res;
        for (int i = 0; i < nums.size(); i++)
        {
            int temp = target - nums[i];
            if (res.find(temp) != res.end())
            {
                return {i, res[temp]};
            }
            else
            {
                res.insert({nums[i], i});
            }
        }
        vector<int> a;
        return a;
    }
};