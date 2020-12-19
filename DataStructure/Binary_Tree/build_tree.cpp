#include<iostream>

using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;
        Node(int d){
            data=d;
            left=NULL;
            right=NULL;
        }
};

Node* build_tree(){
    int a;
    cin>>a;
    if(a==-1){
        return NULL;
    }
    Node* root=  new Node(a);
    root->left=build_tree();
    root->right=build_tree();
    return root;
}
void printTreePreOrder(Node* treeRoot){
    if(treeRoot==NULL){
        return;
    }
    cout<<treeRoot->data<<" ";
    printTreePreOrder(treeRoot->left);
    printTreePreOrder(treeRoot->right);
    
}

void printTreeInOrder(Node* treeRoot){
    if(treeRoot==NULL){
        return;
    }
    printTreeInOrder(treeRoot->left);
        cout<<treeRoot->data<<" ";
    printTreeInOrder(treeRoot->right);
    
}
void printTreePostOrder(Node* treeRoot){
    if(treeRoot==NULL){
        return;
    }
    printTreePostOrder(treeRoot->left);
       
    printTreePostOrder(treeRoot->right);
     cout<<treeRoot->data<<" ";
    
}

int heightOfTree(Node* treeRoot){
    if(treeRoot== NULL){
        return 0;
    }
    int ltLength=heightOfTree(treeRoot->left);
    int rtLength=heightOfTree(treeRoot->right);

    return max(ltLength,rtLength)+1;
    
}

void printKLevel(Node* treeRoot,int k){
    if(!treeRoot){
        return ;
    }
    if(k==1){
        cout<<treeRoot->data<<" ";
        return;
    }
    printKLevel(treeRoot->left,k-1);
    printKLevel(treeRoot->right,k-1);
}

void printAllLevel(Node* treeRoot){
    int h =heightOfTree(treeRoot);
    for (int i = 1; i <= h; i++)
    {
        printKLevel(treeRoot,i);
        cout<<endl;
    }
    
}
int main(){
    cout<<endl;
    Node* treeRoot= build_tree();
    

    cout<<endl;

    cout<<endl;

    cout<<endl;
    // printTreeInOrder(treeRoot);
    // cout<<endl;
    //  printTreePreOrder(treeRoot);
    //  cout<<endl;
    //  printTreePostOrder(treeRoot);
    //  cout<<endl;
    //  cout<<heightOfTree(treeRoot);
    printAllLevel(treeRoot);
    return 0;

}