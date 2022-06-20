//Priority Qyeye

#include<iostream>
#include<vector>

using namespace std;
class Heap{
    vector<int> v;
    bool min_heap;
    bool compare(const int a, const int b){
        if(min_heap){
            return a<b;
        }
        else{
            return a>b;
        }
    }
    void heapify(int i){
        int left=2*i;
        int right=2*i+1;
        int min_index=i;
        if(left<v.size() && compare(v[left],v[i])){
            min_index=left;
        }
        if(right<v.size() && compare(v[right],v[i])){
            min_index=right;
        }
        if(min_index!=i){
            swap(v[i],v[min_index]);
            heapify(min_index);
        }
        
    }
    public:
        Heap(bool type=true){
            min_heap=type;
            v.push_back(-1);
        }
        void push(int data){
            v.push_back(data);
            int index=v.size()-1;
            int parent=index/2;
            while (index>1 && this->compare(v[index],v[parent]))
            {
                swap(v[index],v[parent]);
                index=parent;
                parent=parent/2;
            }
        }
        bool empty(){
            return v.size()==1;
        }
        int top(){
            return v[1];
        }
        void pop(){
            int last = v.size() - 1;
            swap(v[1],v[last]);
            v.pop_back();
            heapify(1);
        }
};

int main(){
    Heap h(false);
    cout<<h.empty()<<endl;
    h.push(1);
    h.push(2);
    h.push(3);
    h.push(4);

    cout<<h.top();
    return 0;
}