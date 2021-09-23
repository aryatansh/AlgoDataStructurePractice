// Parity of a number refers to whether it contains an odd or even number of 1-bits. The number has “odd parity”, if it contains odd number of 1-bits and is “even parity” if it contains even number of 1-bits.

// 1 --> parity of the set is odd
// 0 --> parity of the set is even
// Examples:

// Input : 254
// Output : Odd Parity
// Explanation : Binary of 254 is 11111110.
// There are 7 ones. Thus, parity is odd.

// Input : 1742346774
// Output : Even

#include <iostream>
using namespace std;

int parity(long long x)
{
    x ^= x >> 32;
    x ^= x >> 16;
    x ^= x >> 8;
    x ^= x >> 4;
    x ^= x >> 2;
    x ^= x >> 1;
    return x & 1;
}
int main()
{
    unsigned long long b = 0;
    cin >> b;
    int a = b;
    int counter = 0;
    while (a > 0)
    {
        a = a & (a - 1);
        counter++;
    }
    cout << counter % 2 << endl
         << parity(b);
    return 0;
}