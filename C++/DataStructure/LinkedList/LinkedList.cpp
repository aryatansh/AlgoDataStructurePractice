#include<iostream>

using namespace std;

class Node{
    public:
        int data;
        Node* next;
};
//recursive
void traverseLinkListRecursive(Node* n){
    if(n==NULL){
        return;
    }
    cout<<n->data<<endl;
    traverseLinkListRecursive(n->next);

}
//iterative
void traverseLinkList(Node* n){
    Node* head = n;
    while (head!=NULL)
    {
        cout<<n->data<<endl;
        head=head->next;
    }
    
}


Node* insertNodeAtBeginning(int newData,Node* head){
    Node* new_node = new Node();  
  
    /* 2. put in the data */
    new_node->data = newData;  
  
    /* 3. Make next of new node as head */
    new_node->next = head;  
    head=new_node;
    return head;
    /* 4. move the head to point to the new node */
}
int main(){
    Node *head= new Node();
    Node *n2=new Node();
    Node *n3=new Node();
    head->data=2;
    head->next= n2;
    
    n2->data=3;
    n2->next=n3;
    n3->data=4;

    Node *n4 = new Node();
    n4->data=5;

    traverseLinkListRecursive(head);
    head=insertNodeAtBeginning(5,head);
    //cout<<"Recursive"<<endl;
    traverseLinkListRecursive(head);
    //cout<<"Iterative"<<endl;
    //traverseLinkList(n1);

}



