#include<vector>
#include<iostream>

using namespace std;
int main(){

    vector<int> d {1,2,3,10,15};
    d.push_back(16);
    d.pop_back();
    d.insert(d.begin()+3,100);
    for(int x:d){
        cout<<x<<',';
    }
    
}