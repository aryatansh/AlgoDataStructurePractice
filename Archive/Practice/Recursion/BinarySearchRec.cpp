#include <iostream>
#include <vector>
using namespace std;

int binarySearchRec(vector<int> li, int s, int e, int key)
{
    if (s > e)
    {
        return -1;
    }
    int mid = (s + e) / 2;
    if (li[mid] == key)
    {
        return mid;
    }
    else if (li[mid] > key)
    {
        return binarySearchRec(li, s, mid - 1, key);
    }
    else
    {
        return binarySearchRec(li, mid + 1, e, key);
    }
}
int main()
{
    vector<int> li = {1, 4, 7, 8, 10};
    cout << binarySearchRec(li, 0, li.size() - 1, 1) << endl;
    cout << binarySearchRec(li, 0, li.size() - 1, 4) << endl;
    cout << binarySearchRec(li, 0, li.size() - 1, 6) << endl;
    cout << binarySearchRec(li, 0, li.size() - 1, 7) << endl;
    cout << binarySearchRec(li, 0, li.size() - 1, 8) << endl;
    cout << binarySearchRec(li, 0, li.size() - 1, 10) << endl;
    return 0;
}