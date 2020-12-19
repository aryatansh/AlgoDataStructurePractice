#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> list={3,2,3,5,6,5,2};
    int ans=0;
    for(int i=0;i<list.size();i++){
        ans=list[i]^ans;
    }
    cout<<ans;
    return 0;
}