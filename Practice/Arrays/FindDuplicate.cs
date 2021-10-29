public
class Solution
{
public
    int FindDuplicate(int[] nums)
    {
        int i = 0;
        while (i >= 0)
        {
            if (nums[i] < 0)
            {
                return i;
            }
            int j = i;
            i = nums[i];
            nums[j] = -nums[j];
        }

        return -1;
    }
}