#include <iostream>

using namespace std;

//Naive Solution- N^3
void generate_sum(int arr[], int n)
{

    int maxsum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int currentsum = 0;
            for (int k = i; k <= j; k++)
            {
                currentsum = currentsum + arr[k];
            }
            maxsum = max(maxsum, currentsum);
        }
    }
    cout << maxsum;
}

//Better Solution- N^2
void generate_sum_better(int arr[], int n)
{

    int maxsum = 0;
    int cummulative_sum[1000] = {0};
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            cummulative_sum[i] = arr[i];
        }
        else
        {
            cummulative_sum[i] = cummulative_sum[i - 1] + arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        int currentsum = 0;
        for (int j = i; j < n; j++)
        {

            currentsum = cummulative_sum[j] - (i ? cummulative_sum[i - 1] : 0);
            maxsum = max(currentsum, maxsum);
        }
    }
    cout << endl
         << maxsum;
}

// Kadane's Algo -N

void generate_sum_kadane(int arr[], int n)
{
    int localsum = arr[0];
    int maxsum = arr[0];
    for (int i = 1; i < n; i++)
    {

        localsum = max(arr[i], localsum + arr[i]);
        maxsum = max(maxsum, localsum);
    }
    cout << endl
         << maxsum;
}
int main()
{
    int arr[] = {-4, 1, 3, -2, 6, 2, -8, -9, 4};
    int n = sizeof(arr) / sizeof(int);
    generate_sum(arr, n);
    generate_sum_better(arr, n);
    generate_sum_kadane(arr, n);
    return 0;
}