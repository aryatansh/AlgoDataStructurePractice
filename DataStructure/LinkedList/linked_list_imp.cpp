#include<iostream>

using namespace std;

template<typename T>
class Node{
    public:
    T data;
    Node<T>* next;
    Node(T data){
        this->data =data;
        this->next=NULL;
    }
};
template<typename T>
class LinkedList{
    public:
        Node<T>* head;
        LinkedList(){
            head=NULL;
}
        void insertAtEnd(T data){
            if(this->head==NULL)
            {
                this->head= new Node<T>(data);
                return;
            }
            Node<T>* temp= head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=new Node<T>(data);
        }
        void insertNewHead(T data){
            
            Node<T>* temp= new Node<T>(data);
            if(head!=NULL){
            temp->next=head;
            }
            head=temp;
            
        }
        void popFirst(){
            Node<T>* temp=head;
            head=head->next;
            delete temp;
        }
        void print(){
            Node<T>* current=head;
            while(current!=NULL){
                cout<<current->data;
                current=current->next;
                cout<<endl;
            }
        }
        //Reverse
        void reverse(){
            Node<T>* prev=NULL;
            Node<T>* current=head;
            Node<T>* next=NULL;
            while (current!=NULL)
            {
                next=current->next;
                current->next=prev;
                prev=current;
                current=next;
            }
            head=prev;
        }

        //Reverse With Recursion()
        void reverse_rec(){
            reverse_rec_priv(head);
        }
    
        Node<T>* reverse_rec_priv(Node<T>* node) 
        { 
        if (node == NULL) 
            return NULL; 
        if (node->next == NULL) { 
            head = node; 
            return node; 
        } 
        Node<T>* node1 = reverse_rec_priv(node->next); 
        node1->next = node; 
        node->next = NULL; 
        return node; 
    } 
};

int main(){
    LinkedList<int> l;
    l.insertAtEnd(6);
    
    l.insertAtEnd(7);
    
    l.insertAtEnd(8);
    l.insertAtEnd(9);
    l.print();
    cout<<endl;
    cout<<endl;
    l.reverse_rec();
    cout<<endl;
    cout<<endl;
    l.print();
    //l.print();
    //
    l.popFirst();
    
    
    return 0;
}

