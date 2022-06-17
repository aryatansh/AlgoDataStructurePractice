// DP WITH RECURSION
int canPartitionRec(vector<int> &nums, int s1, int s, int i, int **arr)
{
    if (i >= nums.size())
    {
        return (s1 * 2 == s) ? 1 : 0;
    }
    if (arr[i][s1] != -1)
    {
        return arr[i][s1];
    }
    bool a = canPartitionRec(nums, s1 + nums[i], s, i + 1, arr);
    bool b = canPartitionRec(nums, s1, s, i + 1, arr);
    return arr[i][s1] = (a || b) ? 1 : 0;
}

bool canPartition(vector<int> &nums)
{
    int sum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
    }
    int **arr = new int *[nums.size() + 1];
    for (int i = 0; i < nums.size() + 1; i++)
    {
        arr[i] = new int[sum + 1];
        for (int j = 0; j < (sum + 1); j++)
        {
            arr[i][j] = -1;
        }
    }

    return canPartitionRec(nums, 0, sum, 0, arr) == 1 ? true : false;
}
