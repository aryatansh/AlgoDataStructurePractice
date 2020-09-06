// Given a character array find all possible permutation of it
// Input = abc
// Output = abc,acb,bac,bca,cab,cba
// Using set for unique outputs in case a character is repeted twice


#include <iostream>
#include <set>
#include <string>

using namespace std;

void find_permutation(char* in,int i,set<string> &s){
    if(in[i]=='\0'){

        string t(in);
        s.insert(t);
        return;
    }
    for (int j = i; in[j]!='\0'; j++)
    {
        swap(in[i],in[j]);
        find_permutation(in,i+1,s);
        swap(in[i],in[j]);
    }
    return;
}

int main(){
    char in[100];
    cin>>in;
    set<string> s;
    find_permutation(in,0,s);
    for (auto str:s){
        cout<<str<<endl;
    }
    
    return 0;
}