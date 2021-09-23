//Count set bits
//Example -
//Input-00101001
//Output -3

#include <iostream>
using namespace std;

int CountSetBits(int a)
{
    int counter = 0;
    int mask = a & (~(a - 1));
    while (a != 0)
    {

        a = a ^ mask;
        mask = a & (~(a - 1));
        counter++;
    }
    return counter;
}
int CountSetBits2(int a)
{
    int counter = 0;
    while (a != 0)
    {
        a = a & (a - 1);
        counter++;
    }
    return counter;
}
int main()
{
    int a = 11;
    cout << CountSetBits2(a);
    return 0;
}