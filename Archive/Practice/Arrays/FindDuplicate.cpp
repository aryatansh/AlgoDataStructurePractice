#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

// With Hashmap
int findDuplicate(vector<int> &nums)
{
    unordered_set<int> presentInNums;
    for (int num : nums)
    {
        if (presentInNums.find(num) != presentInNums.end())
        {
            return num;
        }
        else
        {
            presentInNums.insert(num);
        }
    }
    return -1;
}
// Constant Space - Change number to negative value.
int findDuplicateConstantSpace(vector<int> &nums)
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
int main()
{
    return 0;
}
