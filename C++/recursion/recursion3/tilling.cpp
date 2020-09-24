// Wall Size - 4*N and tile size of 1,4 and 4,1. How many ways to build the wall
#include <iostream>

using namespace std;

int build_wall(int n){
    if(n<=3){
        return 1;
    }
    return build_wall(n-1)+build_wall(n-4);
}
int main(){
    cout<<build_wall(4)<<'\n';
    cout<<build_wall(5)<<'\n';

    return 0;
}


