#include<iostream>

using namespace std;


char keypad[][10]={"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void generate_names(char *in,char *out,int i,int j){
    if(in[i]=='\0'){
        out[j]='\0';
        cout<<out<<endl;
        return;
    }
    int digit=in[i]-'0';
    int k=0;
    while (keypad[digit][k]!='\0')
    {
        out[j]=keypad[digit][k];
        generate_names(in,out,i+1,j+1);
        k++;
    }
    return;
}

int main(){
    char input[1000];
    cin>>input;
    char out[1000];
    generate_names(input,out,0,0);
    return 0;
}