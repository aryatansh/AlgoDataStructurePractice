class Solution
{
public:
    int subarraySum(vector<int> &nums, int k)
    {
        //key is prefix sum and value is count
        unordered_map<int, int> prefix_sum_map;

        prefix_sum_map.insert(make_pair(0, 1));
        int sum = 0;
        int res = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            if (prefix_sum_map.find(sum - k) != prefix_sum_map.end())
            {
                res += prefix_sum_map[sum - k];
            }
            if (prefix_sum_map.find(sum) == prefix_sum_map.end())
            {
                prefix_sum_map.insert(make_pair(sum, 1));
            }
            else
            {
                prefix_sum_map[sum] = prefix_sum_map[sum] + 1;
            }
        }
        return res;
    }
};