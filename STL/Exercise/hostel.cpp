#include<iostream>
#include<queue>
#include<cmath>
using namespace std;

int main(){
      int queries;
      cin>>queries;
      int k;
      cin>>k;
      priority_queue<long> pq;
      for(int i=0;i<queries;i++){
          int inp;
          cin>> inp;
          if(inp==1){
              int inp1;
              int inp2;
              cin>>inp1;
              cin>>inp2;
              pq.push(pow(inp1,2)+pow(inp2,2)); 
          }
          if(inp==2){
              while(pq.size()>k){
                   pq.pop();
              }
              if(pq.size()==k){
                  cout<<pq.top()<<endl;
              }
          }
      }

}