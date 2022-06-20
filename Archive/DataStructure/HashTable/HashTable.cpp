
#include <iostream>
#include <cstring>

using namespace std;

template <typename T>
class Node
{
public:
    string key;
    T value;
    Node<T> *next;
    Node(string k, T v)
    {
        key = k;
        value = v;
    }
};
template <typename T>
class Hashtable
{
    int cs; //Current size
    int ts; //Max arr size
    Node<T> **buckets;

public:
    Hashtable(int ds = 3)
    {
        cs = 0;
        ts = ds;
        buckets = new Node<T> *[ts];
    }
    int hashFn(string key)
    {
        int l = key.length();
        int ans = 0;
        int p = 1;
        for (int i = 0; i < l; i++)
        {
            ans += key[l - i - 1] * p;
            p = p * 37;
            p %= ts;
            ans %= ts;
        }
        return ans;
    }
    void insert(string key, T value)
    {
        int i = hashFn(key);
        Node<T> *n = new Node<T>(key, value);
        n->next = buckets[i];
        buckets[i] = n;
    }
    void print()
    {
        for (int i = 0; i < ts; i++)
        {
            Node<T> *temp = buckets[i];
            cout << "Buckets: " << i << "->";
            while (temp != 0)
            {
                cout << temp->key << " ";
                temp = temp->next;
            }
            cout << endl;
        }
    }
    T* search(string key)
    {
        int i = hashFn(key);
        Node<T>* temp = buckets[i];
        
        while (temp != NULL)
        {
            if (temp->key == key)
            {
                return &(temp->value);
            }
            temp=temp->next;
        }
        return NULL;
    }
    T* erase(string key){
    }
};

int main()
{
    Hashtable<int> h;
    h.insert("text", 1);
    h.insert("text2", 2);
    h.insert("text3", 3);
    h.insert("text4", 4);

    h.insert("text5", 5);
    h.print();
    cout << *h.search("text")<<endl;
    cout << *h.search("text10");
}