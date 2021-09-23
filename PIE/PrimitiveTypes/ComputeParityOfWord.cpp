#include <iostream>

using namespace std;

bool ComputeParityOfWord(int a)
{
    short x = 0;
    while (a)
    {
        x += a & 1;
        a = a >> 1;
    }
    return (x % 2 == 0) ? true : false;
}
int main()
{
    int a = 11;
    cout << ComputeParityOfWord(a);

    return 0;
}
