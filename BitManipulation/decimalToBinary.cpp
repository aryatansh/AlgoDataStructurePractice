#include <iostream>

using namespace std;

int convertDecimalToBinary(int n)
{
    int ans = 0;
    int a = 1;
    while (n > 0)
    {
        int last_bit = (n & 1);
        ans += a * last_bit;
        n = n >> 1;
        a = a * 10;
    }
    return ans;
}
int main()
{
    cout << convertDecimalToBinary(61);
    return 0;
}