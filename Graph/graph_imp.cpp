#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;

class Graph
{
    //Adj List
    unordered_map<string, list<pair<string, int>>> l;

public:
    void add_edge(string x, string y, bool bidir, int wt)
    {
        l[x].push_back(make_pair(y, wt));
        if (bidir)
        {
            l[y].push_back(make_pair(x, wt));
        }
    }

    void print_adj_list()
    {
        for (auto c : l)
        {
            string city = c.first;
            cout << city << " -> ";
            list<pair<string, int>> adj_list = c.second;
            for (auto nbr : adj_list)
            {
                string dest = nbr.first;
                int weight = nbr.second;
                cout << " (" << dest << " " << weight
                     << "), ";
            }
            cout << endl;
        }
    }
};
int main()
{
    Graph g;
    g.add_edge("A", "B", true, 20);
    g.add_edge("B", "D", true, 40);
    g.add_edge("A", "C", true, 10);
    g.add_edge("C", "D", true, 40);
    g.add_edge("A", "D", false, 50);
    g.print_adj_list();
    return 0;
}