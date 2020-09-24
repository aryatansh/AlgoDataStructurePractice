// Given  N, friends who want to go to a party on bikes, Each guy can go as a couple or single. Find the number of ways N friends can go to a party. N=3, Ways=4



#include <iostream>

using namespace std;

int waysToGoToParty(int n){
    if(n<=1){
        return 1;
    }
    return waysToGoToParty(n-1)+ (n-1)*waysToGoToParty(n-2);
}

int main(){
    cout<<waysToGoToParty(2)<<endl<<waysToGoToParty(3)<<endl;
    cout<<waysToGoToParty(4)<<endl<<waysToGoToParty(5);
    return 0;
}