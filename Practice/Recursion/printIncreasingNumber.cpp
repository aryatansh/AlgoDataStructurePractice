#include <iostream>
#include <vector>

using namespace std;

bool verifyIncRec(vector<int> a, int i)
{
    if (i == a.size())
    {
        return true;
    }

    if (i > 0 && a[i] < a[i - 1])
    {
        return false;
    }
    bool isCorrect = verifyIncRec(a, i + 1);
    return isCorrect;
}
int main()
{
    vector<int> a = {1, 2, 3, 4, 1};
    cout << verifyIncRec(a, 0);
    return 0;
}
