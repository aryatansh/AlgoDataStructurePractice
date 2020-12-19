#include <iostream>

using namespace std;

int mult(int a,int b){
    if(b==1){
        return a;
    }
    return a+mult(a,b-1);
}
int main(){
    int a=11;
    int b=6;
    cout<<mult(a,b);
    return 0;

}