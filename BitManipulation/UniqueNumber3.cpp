//Problem:-  An array of numbers is provided in which all the numbers are present thrice except for 1 number which is present once. Find the unique number
//Input- 3 1 3 2 3 2 2
//Output- 1

#include <iostream>

using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 1, 1, 3, 3};
    int cnt[64] = {0};
    for (int i = 0; i < 7; i++)
    {
        int index = 0;
        while (arr[i] > 0)
        {
            int last_bit = arr[i] & 1;
            cnt[index] += last_bit;
            index++;
            arr[i] = arr[i] >> 1;
        }
    }
    int pw = 1;
    int ans = 0;
    for (int i = 0; i < 64; i++)
    {
        cnt[i] %= 3;
        ans += cnt[i] * pw;
        pw *= 2;
    }
    cout << ans;
    return 0;
}