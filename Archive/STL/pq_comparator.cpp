//In priority queue when lhs and rhs is compared and returns true rhs go up in priority

//If greater comparator is used it will return data in ascending order
#include<iostream>
#include<queue>
#include<climits>

using namespace std;
struct CustomCompare
{
    bool operator()(const int& lhs, const int& rhs)
    {
        return rhs < lhs;
    }
};

int main(){
    priority_queue<int,vector<int>,greater<int> > a;
    a.push(1);
    a.push(2);
    a.push(3);
    a.push(4);
    a.push(5);
    a.push(6);
    a.push(7);
    a.push(8);
    a.push(9);
    a.push(10);
    while (!a.empty())
    {
        cout<<a.top();
        a.pop();
    }
    return 0;
}