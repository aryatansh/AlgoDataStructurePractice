public class Solution
{
    private void Swap(int[] nums, int i, int j)
    {
        var temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }

    public void SortColors(int[] nums)
    {
        int a = 0;
        int b = nums.Length - 1;
        for (int i = 0; i <= b;)
        {
            if (nums[i] == 0)
            {
                Swap(nums, i, a);
                a++;
                i++;
            }
            else if (nums[i] == 2)
            {
                Swap(nums, i, b);
                b--;
            }
            else
            {
                i++;
            }
        }
    }
}