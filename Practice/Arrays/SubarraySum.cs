public class Solution
{
    public int SubarraySum(int[] nums, int k)
    {
        //key is prefix sum and value is count
        Dictionary<int, int> prefix_sum_map = new Dictionary<int, int>();

        prefix_sum_map.Add(0, 1);
        int sum = 0;
        int res = 0;
        for (int i = 0; i < nums.Length; i++)
        {
            sum += nums[i];
            if (prefix_sum_map.ContainsKey(sum - k))
            {
                res += prefix_sum_map[sum - k];
            }
            if (!prefix_sum_map.ContainsKey(sum))
            {
                prefix_sum_map.Add(sum, 1);
            }
            else
            {
                prefix_sum_map[sum] = prefix_sum_map[sum] + 1;
            }
        }
        return res;
    }
}