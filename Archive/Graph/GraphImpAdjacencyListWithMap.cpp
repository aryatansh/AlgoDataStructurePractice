#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;

class Graph
{
    unordered_map<string, list<pair<string, int>>> p;

public:
    void addEdge(string a, string b, bool biDirectional, int val)
    {
        p[a].push_back({b, val});
        if (biDirectional)
        {
            p[b].push_back({a, val});
        }
    }

    void printEdge()
    {
        for (auto val : p)
        {
            string city = val.first;
            cout << city << " -> ";
            for (auto li : val.second)
            {
                cout << " " << li.first << " , " << li.second << " ";
            }
            cout << endl;
        }
    }
};
int main()
{
    Graph g;
    g.addEdge("A", "B", true, 20);
    g.addEdge("B", "D", true, 40);
    g.addEdge("A", "C", true, 10);
    g.addEdge("C", "D", true, 40);
    g.addEdge("A", "D", false, 50);
    g.printEdge();
    return 0;
}