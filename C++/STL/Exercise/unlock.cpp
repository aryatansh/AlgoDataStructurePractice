#include <iostream>
#include <queue>
#include <vector>
#include <unordered_map>
using namespace std;

int main(){
    int n,k;
    vector<int> pat;
    priority_queue<int> pq;
    unordered_map<int,int> um;
    cin>>n;
    cin>>k;
    for(int i=0;i<n;i++){
            int inp;
            cin>>inp;
            pat.push_back(inp);
            
    }
    for(int i=0;i<n;i++){
            pq.push(pat[i]);
    }
    for(int i=0;i<n;i++){
        um[pat[i]]=i;
    }
    int i=0;
    int j=0;
    while(i!=k && j<n){
        if(pat[j]<pq.top()){           
            int temp=pat[j];  
            pat[j]=pq.top();
            pat[um[pat[j]]]=temp;
            um[temp]=um[pat[j]];
            pq.pop();
            ++i;
            ++j;  
        }
        else{
            j++;
            pq.pop();
        }
                }
     for(int i=0;i<n;i++){
            cout<<pat[i]<<" ";
            
    }
    
    return 0;
}
