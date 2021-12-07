class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int indexFor1 = 0;
        int i = 0;
        int indexFor2 = nums.size() - 1;
        while (i <= indexFor2)
        {
            if (nums[i] < 1)
            {
                int temp = nums[indexFor1];
                nums[indexFor1] = nums[i];
                nums[i] = temp;
                i++;
                indexFor1++;
            }
            else if (nums[i] > 1)
            {
                int temp = nums[indexFor2];
                nums[indexFor2] = nums[i];
                nums[i] = temp;
                indexFor2--;
            }
            else
            {
                i++;
            }
        }
    }
};