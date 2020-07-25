#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
        map<string,int> m;
        m.insert(make_pair("Mango",100));
        m["Banana"]=20;
        string fruit;
        cin>>fruit;
        auto it=m.find(fruit);
        if(it!=m.end()){
            cout<<"price of "<<fruit<<" is"<<m[fruit]<<endl;
        }
        else{
                cout<<"Fruit is not present";
        }
        
        return 0;
}