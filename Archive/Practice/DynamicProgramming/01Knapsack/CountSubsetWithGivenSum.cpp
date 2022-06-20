#include <iostream>
#include <vector>
using namespace std;

void CountSubsetWithGivenSum(vector<int> nums, int &ans, int totalSum, int i)
{
    if (totalSum == 0)
    {
        ans = ans + 1;
    }
    if (i >= nums.size())
    {
        return;
    }
    if (totalSum - nums[i] >= 0)
    {
        CountSubsetWithGivenSum(nums, ans, totalSum - nums[i], i + 1);
    }
    CountSubsetWithGivenSum(nums, ans, totalSum, i + 1);
    return;
}
int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};
    int ans = 0;
    CountSubsetWithGivenSum(nums, ans, 7, 0);
    cout << ans;
    return 0;
}