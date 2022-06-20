//Swap bits present at i and j index of the number. Index starts at 0

#include <iostream>

using namespace std;
void decToBinary(int n)
{
    int binaryNum[32];

    int i = 0;
    while (n > 0)
    {

        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
        cout << binaryNum[j];
}
int bruteForce(int n, int i, int j)
{
    int c = n;
    int eai = 0;
    int eaj = 0;
    int counter = 0;
    while (c > 0)
    {
        if (counter == i)
        {
            eai = c & 1;
        }
        if (counter == j)
        {
            eaj = c & 1;
        }
        c = c >> 1;
        counter++;
    }

    if (eai || eaj)
    {
        if (eai && !eaj)
        {
            int mask = 1 << j;
            n = mask | n;
            mask = ~(1 << i);
            n = mask & n;
        }
        else if (eaj && !eai)
        {
            int mask = 1 << i;
            n = mask | n;
            mask = ~(1 << j);
            n = mask & n;
        }
    }
    return n;
}

int swapBits(int n, int i, int j)
{
    if (((n >> i) & 1) != (n >> j) & 1)
    {
        int bit_mask = (1 << i) | (1 << j);
        x ^= bit_mask;
    }
    return x;
}

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    decToBinary(n);
    cout << endl;
    int c = bruteForce(n, a, b);
    cout << endl
         << c << endl;
    decToBinary(c);

    return 0;
}