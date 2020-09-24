#include<iostream>
#include<queue>

using namespace std;
struct CustomCompare
{
    bool operator()(const int& lhs, const int& rhs)
    {
        return lhs < rhs;
    }
};

int main(){
    priority_queue<int,vector<int>,CustomCompare > a;
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