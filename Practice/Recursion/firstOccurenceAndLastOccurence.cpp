#include <iostream>
#include <vector>
using namespace std;

int firstOccurence(vector<int> li, int i, int key)
{
    if (i == li.size())
    {
        return -1;
    }
    if (key == li[i])
    {
        return i;
    }
    return firstOccurence(li, i + 1, key);
}

void lastOccurenceUpdateArgument(vector<int> li, int i, int key, int &a)
{
    if (i == li.size())
    {
        return;
    }
    if (key == li[i])
    {
        a = i;
    }
    lastOccurenceUpdateArgument(li, i + 1, key, a);
}

int lastOccurence(vector<int> li, int i, int key)
{
    if (i == li.size())
    {
        return -1;
    }
    int k = lastOccurence(li, i + 1, key);
    if (k == -1 && li[i] == key)
    {
        return i;
    }
    return k;
}

int main()
{
    vector<int> li = {1, 2, 3, 4, 4, 6, 7};
    cout << firstOccurence(li, 0, 1) << " " << endl;

    cout << "Last Occurence Update Argument: " << endl;
    int a = -1;
    lastOccurenceUpdateArgument(li, 0, 4, a);

    cout << a << " " << endl;
    lastOccurenceUpdateArgument(li, 0, 6, a);
    cout << a << " " << endl;
    lastOccurenceUpdateArgument(li, 0, 7, a);
    cout << a << " " << endl;
    a = -1;
    lastOccurenceUpdateArgument(li, 0, 8, a);
    cout << a << " " << endl;
    cout << "lastOccurence: ";
    cout << lastOccurence(li, 0, 4) << endl;
    cout << lastOccurence(li, 0, 6) << endl;
    cout << lastOccurence(li, 0, 7) << endl;
    cout << lastOccurence(li, 0, 8) << endl;

    return 0;
}