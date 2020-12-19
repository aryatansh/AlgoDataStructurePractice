#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {20, 30, 40, 40, 40, 40, 60, 80, 100, 1100};
    int n = sizeof(arr) / sizeof(int);

    //Search --> find
    int key;
    cin >> key;
    bool present = binary_search(arr, arr + n, key);
    if (present)
    {
        cout << "Present" << endl;
    }
    else
    {
        cout << "Not Present" << endl;
    }

    //Gives first index which has value >= key
    auto it_lb = lower_bound(arr, arr + n, 40);
    //Gives first index which has value > key
    auto it_ub = upper_bound(arr, arr + n, 41);

    cout << "Lower bound index is " << it_lb - arr << endl;
    cout << "Upper bound index is " << it_ub - arr << endl;
    cout << "Frequency " << it_ub - it_lb << endl;

    return 0;
}