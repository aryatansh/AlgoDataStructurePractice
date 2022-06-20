public class Solution
{
    public int FindDuplicate(int[] nums)
    {
        int hare = nums[0];
        int tortoise = nums[0];

        do
        {
            hare = nums[nums[hare]];
            tortoise = nums[tortoise];
        }
        while (hare != tortoise);

        tortoise = nums[0];
        while (tortoise != hare)
        {
            hare = nums[hare];
            tortoise = nums[tortoise];
        }
        return tortoise;
    }
}