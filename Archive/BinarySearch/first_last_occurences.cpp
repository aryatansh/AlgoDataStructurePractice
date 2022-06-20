#include <iostream>
#include <unordered_map>
using namespace std;

int first_occurence(int a[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int ans = -1;
    while (s <= e)
    {

        int mid = (s + e) / 2;
        if (a[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (a[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
}
int last_occurence(int a[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    int ans = -1;
    while (s <= e)
    {

        int mid = (s + e) / 2;
        if (a[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (a[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
}
int main()
{
    int arr[] = {1, 2, 5, 8, 8, 8, 8, 8, 10, 12, 15};

    int s = first_occurence(arr, 12, 8);
    int e = last_occurence(arr, 12, 8);
    cout << s << " " << e;
    return 0;
    //First and Last occurence of a key in sorted array
}