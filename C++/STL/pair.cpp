#include <iostream>

using namespace std;

int main(){
    pair < pair <int,int >, int > test;
    test=make_pair(make_pair(1,2),2);
    test.first.first=3;
    test.first.second=4;
    test.second=4;
    cout<<test.first.first;
    cout<<test.first.second<<"\n";
    return 0;

}