#include <iostream>
#include <cmath>
using namespace std;

int countSetBits(int x)
{
    int count_bits = 0;
    while (x)
    {
        count_bits += x & 1;
        x >>= 1;
    }
    return count_bits;
}
int main()
{
    srand((unsigned)time(0));
    int a = rand();
    cout << a;
}
