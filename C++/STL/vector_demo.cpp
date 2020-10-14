#include<vector>
#include<iostream>
#include<unordered_map>

using namespace std;
int main(){
    unordered_map<int,vector<int>> a;

    vector<int> d {1,2,3,10,15};
    d.push_back(16);
    d.pop_back();
    
    d.insert(d.begin()+3,100);
    for(int x:d){
        cout<<x<<',';
    }
    
}