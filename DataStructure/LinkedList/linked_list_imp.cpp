#include <iostream>

using namespace std;

template <typename T>
class Node
{
public:
    T data;
    Node<T> *next;
    Node(T data)
    {
        this->data = data;
        this->next = NULL;
    }
};
template <typename T>
class LinkedList
{
public:
    Node<T> *head;
    LinkedList()
    {
        head = NULL;
    }
    void insertInMiddle(T data, int pos)
    {
        if (head == NULL)
        {
            insertNewHead(data);
        }
        Node<T> *current = head;
        int i = 1;
        while (current != NULL && i <= pos)
        {
            if (i == pos - 1)
            {
                Node<T> *temp = new Node<T>(data);
                temp->next = current->next;
                current->next = temp;
                break;
            }
            current = current->next;
            i++;
        }
    }
    void insertAtEnd(T data)
    {
        if (this->head == NULL)
        {
            this->head = new Node<T>(data);
            return;
        }
        Node<T> *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new Node<T>(data);
    }
    void insertNewHead(T data)
    {

        Node<T> *temp = new Node<T>(data);
        if (head != NULL)
        {
            temp->next = head;
        }
        head = temp;
    }
    void deleteFirst()
    {
        Node<T> *temp = head;
        head = head->next;
        delete temp;
    }
    void search(T data)
    {
        int i = 0;
        Node<T> *current = head;
        while (current != NULL)
        {
            if (current->data == data)
            {
                cout << i;
                break;
            }
            current = current->next;
            i++;
        }
    }
    void print()
    {
        Node<T> *current = head;
        while (current != NULL)
        {
            cout << current->data;
            current = current->next;
            cout << endl;
        }
    }
    //Reverse
    void reverse2()
    {
    }
    void reverse()
    {
        Node<T> *prev = NULL;
        Node<T> *current = head;
        Node<T> *next = NULL;
        while (current != NULL)
        {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;
    }

    //Reverse With Recursion()
    void reverse_rec()
    {
        reverse_rec_priv(head);
    }

    Node<T> *reverse_rec_priv(Node<T> *node)
    {
        if (node == NULL)
            return NULL;
        if (node->next == NULL)
        {
            head = node;
            return node;
        }
        Node<T> *node1 = reverse_rec_priv(node->next);
        node1->next = node;
        node->next = NULL;
        return node;
    }
};

int main()
{
    LinkedList<int> l;
    l.insertNewHead(1);

    l.insertAtEnd(6);
    l.insertInMiddle(2, 2);
    l.insertAtEnd(7);
    l.insertInMiddle(3, 3);

    l.insertAtEnd(8);
    l.insertAtEnd(9);
    l.print();
    cout << endl;
    // l.print();
    // cout << endl;
    // l.reverse_rec();
    // cout << endl;
    // cout << endl;
    // l.print();
    l.search(2);
    l.search(6);
    //l.print();
    //
    return 0;
}
