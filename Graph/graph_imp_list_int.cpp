#include <iostream>
#include <list>
using namespace std;

class Graph
{
public:
    int V;
    list<int> *n;
    Graph(int V)
    {
        this->V = V;
        n = new list<int>]]
        ]];
    }

    void add_edge(int x, int y)
    {
        n[x].push_back(y);
        n[y].push_back(x);
    }

    void print_edge()
    {
        for (int i = 0; i < V; i++)
        {
            cout << " Vertice: " << i << "-> ";
            for (int x : n[i])
            {
                cout << x << ", ";
            }
            cout << endl;
        }
    }
};
int main()
{
    Graph g(4);
    g.add_edge(0, 1);
    g.add_edge(0, 2);
    g.add_edge(1, 2);
    g.add_edge(2, 3);
    g.print_edge();
    return 0;
}