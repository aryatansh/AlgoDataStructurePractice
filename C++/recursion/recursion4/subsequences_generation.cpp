// #ubsequence/Subset Generation
// Given a string containing n characters find
// out all the subsets of that string
// Sample I/O
//inp=abc
//out=["","a","b","c","ab","bc","ca","abc"]

#include<iostream>

using namespace std;

void print_substring(char *inp,char *out,int i,int j){
    if(inp[i]=='\0'){
        out[j]='\0';
        cout<<out<<endl;
        return;
    }
    out[j]=inp[i];
    print_substring(inp,out,i+1,j+1);
    print_substring(inp,out,i+1,j);
}

int main(){
    char input[]="a\0bc";
    cout<<input;
    char output[20];
    print_substring(input,output,0,0);
    return 0;
}