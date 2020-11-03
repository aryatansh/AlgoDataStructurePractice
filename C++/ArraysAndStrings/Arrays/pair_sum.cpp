//Given a sorted array find a pair of elements that sum to K

#include <iostream>

using namespace std;

void print_pair_sum_to_k(int *a, int n, int k)
{
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        if ((a[i] + a[j]) < k)
        {
            i++;
        }
        else if ((a[i] + a[j]) > k)
        {
            j--;
        }
        else
        {
            cout << "First index is: " << i << "Last index is: " << j << endl;
            i++;
            j--;
        }
    }
}
int main()
{
    int a[] = {1, 3, 5, 7, 10, 11, 13};
    int n = sizeof(a) / sizeof(int);
    print_pair_sum_to_k(a, n, 16);
    return 0;
}