#include <iostream>

using namespace std;

void generate_subarays(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << arr[k] << ",";
            }
            cout << endl;
        }
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    generate_subarays(arr, 5);
    return 0;
}