#include <iostream>
#include <vector>
#include <list>

using namespace std;

class Graph
{
    int V;
    list<int> *L;

public:
    Graph(int v)
    {
        V = v;
        L = new list<int>[v];
    }

    void addEdge(int x, int y)
    {
        L[x].push_back(y);
        L[y].push_back(x);
    }
    void print()
    {
        for (int i = 0; i < V; i++)
        {
            cout << "Vertex: " << i << " -> ";
            for (int neighbour : L[i])
            {
                cout << neighbour << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    g.print();

    return 0;
}