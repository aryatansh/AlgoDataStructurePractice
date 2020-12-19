#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int arr[] = {1, 2, 5, 8, 8, 8, 8, 8, 10, 12, 15};

    bool isPresent = binary_search(arr, arr + 12, 8);

    if (isPresent)
    {
        cout << "Present";
    }
    else
    {
        cout << "Absent";
    }
    //Lower Bound- Gives first occurence of a number greater than equal to key
    auto it = lower_bound(arr, arr + 12, 8);
    cout << it - arr << endl;
    //Upper Bound- Gives first occurence of a number greater than key
    it = upper_bound(arr, arr + 12, 8);
    cout << it - arr << endl;

    // To find the occurence of an element in an array, lower bound index can be seperated from upper bound
    return 0;
    //First and Last occurence of a key in sorted array
}