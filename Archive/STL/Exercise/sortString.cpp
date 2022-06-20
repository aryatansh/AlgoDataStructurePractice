#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;
bool compare(string a, string b){
       if(a<b){
               if(b.substr(0,a.length())==a){
                       return false;
               }
               return true;
       }
       else if(a>b){
               if(a.substr(0,b.length())==b){
                        return true;
               }
               return false;
       }
       else{
               return true;
       }
}
int main() {
        vector<string> a;
        a.reserve(1000);
        int n;
        cin>>n;
        for (int i = 0; i < n; i++)
        {
                string inpStr;
                cin>>inpStr;
                a.push_back(inpStr);
        }
        sort(a.begin(),a.end(),compare);
        
}