// Right Propogate the rightmost set bit
// Input - 00100
// Output- 00111

#include <iostream>
using namespace std;
int RightPropogateRightMostSetBit2(int n)
{
    return n | (n - 1);
}

//Find the number less than the last set bit number iteratively.
int RightPropogateRightMostSetBit(int n)
{
    int i = 0;
    int mask = pow(2, i) - 1;
    bool isMaskRequired = false;
    while ((n & mask) == 0)
    {
        i++;
        mask = pow(2, i) - 1;
        isMaskRequired = true;
    }
    if (isMaskRequired)
    {
        n = n + pow(2, i - 1) - 1;
    }
    return n;
}
int main()
{
    int a = 16;
    cout << RightPropogateRightMostSetBit(a);
    cout << RightPropogateRightMostSetBit2(a);
    return 0;
}