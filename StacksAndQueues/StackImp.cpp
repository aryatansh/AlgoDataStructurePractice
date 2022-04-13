#include <iostream>
#include <vector>
using namespace std;
class Stack
{
    vector<int> l;
    int t = 0;

public:
    void push(int data)
    {
        l.push_back(data);
        t++;
    }
    void pop()
    {
        if (t == 0)
        {
            throw exception();
        }
        l.pop_back();
        t--;
    }
    int top()
    {
        if (t == 0)
        {
            throw exception();
        }
        return l[t - 1];
    }
};
int main()
{
    Stack st;
    st.push(5);
    st.push(6);
    cout << st.top();
    st.pop();
    cout << st.top();
    st.pop();
    st.pop();
    return 0;
}