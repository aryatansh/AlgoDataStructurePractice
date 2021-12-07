#include <iostream>
#include <vector>

using namespace std;

class Knapsack
{
    //Top Down(Recursive)
private:
    int solveRec(const vector<int> &profits, const vector<int> &weights, int capacity, int index, int **cache)
    {
        if (index == profits.size())
        {
            return 0;
        }
        if (capacity == 0)
        {
            cache[index][capacity] = 0;
        }
        if (cache[index][capacity] != -1)
        {
            return cache[index][capacity];
        }
        int weight = weights[index];
        int maxProfit = 0;
        for (int i = 0; i * weight <= capacity; i++)
        {
            int currentWeight = i * weight;
            int profit = (i * profits[index]) + solveRec(profits, weights, capacity - currentWeight, index + 1, cache);
            maxProfit = max(profit, maxProfit);
        }
        return cache[index][capacity] = maxProfit;
    }

    //Iterative
    int solveIterative(const vector<int> &profits, const vector<int> &weights, int capacity)
    {
    }

public:
    int solveKnapsack(const vector<int> &profits, const vector<int> &weights, int capacity)
    {
        int **cache = new int *[profits.size() + 1];
        for (int i = 0; i <= profits.size(); i++)
        {
            cache[i] = new int[capacity + 1];
            for (int j = 0; j <= capacity; j++)
            {
                cache[i][j] = -1;
            }
        }
        if (capacity == 0 || profits.size() == 0)
        {
            return 0;
        }
        return solveRec(profits, weights, capacity, 0, cache);
    }
};

int main(int argc, char *argv[])
{
    Knapsack *ks = new Knapsack();
    vector<int> profits = {15, 50, 60, 90};
    vector<int> weights = {1, 3, 4, 5};
    cout << ks->solveKnapsack(profits, weights, 8) << endl;
    cout << ks->solveKnapsack(profits, weights, 6) << endl;

    delete ks;
}