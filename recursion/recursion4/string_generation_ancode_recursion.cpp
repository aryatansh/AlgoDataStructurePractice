// Generate group ofString for a number
// input = 1234
// output = abcd,lcd((12)34),awd(1(23)4)
#include<iostream>

using namespace std;


void generate_sequence(char* in,char* out,int i,int j){
    if(in[i]=='\0'){
        out[j]='\0';
        cout<<out<<endl;
        return;
    }
    int digit=in[i]-'0';
    char ch='A'+digit-1;
    out[j]=ch;
    generate_sequence(in,out,i+1,j+1);

    if(in[i+1]!='\0'){
        int secondDigit=in[i+1]-'0';
        int no=digit*10+secondDigit;
        if(no<=26){

            ch='A'+no-1;
            out[j]=ch;
            generate_sequence(in,out,i+2,j+1);
        }
    }
    return;

}





int main(){
    char in[1000];
    cin>>in;
    char out[1000];
    generate_sequence(in,out,0,0);
    return 0 ;
}