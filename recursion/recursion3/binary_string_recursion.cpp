#include <iostream>

using namespace std;

int binary_string(int n){
    if(n==1){
        return 2;
    }
    if(n==2){
        return 3;
    }
    return binary_string(n-1)+binary_string(n-2);
}
int main(){
    cout<<binary_string(3)<<'\n'<<binary_string(4);
    return 0;
}