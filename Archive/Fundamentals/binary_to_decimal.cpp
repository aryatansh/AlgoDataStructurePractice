#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int count = 0;
    cin >> count;
    int arr[count];
    for (int i = 0; i < count; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < count; i++)
    {
        int out = 0;
        int digitCount = 0;
        while (arr[i] != 0)
        {
            out += pow(2, digitCount) * (arr[i] % 10);
            digitCount++;
            arr[i] /= 10;
        }
        cout << out << endl;
    }

    return 0;
}