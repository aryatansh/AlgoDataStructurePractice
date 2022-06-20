// #include <iostream>

// using namespace std;
// int main()
// {
//     int smallest, largest, step;
//     cin >> smallest;
//     cin >> largest;
//     cin >> step;
//     float i = smallest;
//     while (i <= largest)
//     {
//         float x = ((i - 32) * 5) / 9;
//         cout << i << " " << (int)x << endl;
//         i = i + step;
//     }
//     return 0;
// }

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x = 0;
    cin >> x;
    string isPrime = "True";
    int sq = (int)sqrt(x);
    for (int i = 2; i <= sq; i++)
    {
        if (x % i == 0)
        {
            isPrime = "False";
            break;
        }
    }
    cout << isPrime;
    return 0;
}