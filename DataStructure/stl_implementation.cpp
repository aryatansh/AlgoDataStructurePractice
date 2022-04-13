#include <iostream>
#include <list>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;

int main()
{
    list<int> l;
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.reverse();
    auto t = find(l.begin(), l.end(), 2);
    cout << *t << endl
         << endl;
    l.remove(2);
    for (auto it = l.begin(); it != l.end(); it++)
    {
        cout << *it << endl;
    }

    stack<int> a;

    a.push();
    a.queue<int> b;
    priority_queue<int> pq;

    deque<int> ab;
    ab.
}
