#include <iostream>
#include <map>
#include <list>
#include <queue>
using namespace std;

template <typename T>
class Graph
{
    map<T, list<T>> l;

public:
    void add_edge(T x, T y)
    {
        l[x].push_back(y);
        l[y].push_back(x);
    }
    void bfs(T x)
    {
        map<T, bool> visited;
        queue<T> src;
        src.push(x);
        visited[x] = true;
        while (!src.empty())
        {
            T node = src.front();
            src.pop();
            cout << node << " ";
            for (T nbr : l[node])
            {
                if (!visited[nbr])
                {
                    src.push(nbr);
                    visited[nbr] = true;
                }
            }
        }
    }
    void dfs(T src)
    {
        map<T, bool> visited;
        //Mark all the nodes as not visited in the beginning
        for (auto p : l)
        {
            T node = p.first;
            visited[node] = false;
        }
    }
};

int main()
{
    Graph<int> g;
    g.add_edge(0, 1);
    g.add_edge(1, 2);
    g.add_edge(2, 3);
    g.add_edge(3, 4);
    g.add_edge(4, 5);
    g.bfs(0);
    return 0;
}