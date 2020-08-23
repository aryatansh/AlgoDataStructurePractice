#include<iostream>
#include<list>

using namespace std;

int main(){
    list<int> a={1,2,3,4,5,6};
    list<int>::iterator it =a.begin();
    advance(it,2);
    a.insert(it,7);
    
    for (auto it= a.begin();it!=a.end();it++)
    {
        cout<<*it;
    }
    return 0;
}