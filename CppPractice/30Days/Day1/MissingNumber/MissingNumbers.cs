public class Solution
{
    public int MissingNumber(int[] nums)
    {
        int a = 0;
        for (int i = 0; i < nums.Length; i++)
        {
            a = a ^ nums[i] ^ (i + 1);
        }
        return a;
    }
}