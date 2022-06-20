#include <iostream>
#include <vector>

using namespace std;

class Knapsack
{

public:
    int solveKnapsack(const vector<int> &profits, const vector<int> &weights, int capacity)
    {
        vector<vector<int>> dp(profits.size(), vector<int>(capacity + 1));
        return this->knapsackRecursive(dp, profits, weights, capacity, 0);
    }

private:
    int knapsackRecursive(vector<vector<int>> &dp, const vector<int> &profits,
                          const vector<int> &weights, int capacity, int currentIndex)
    {

        // base checks
        if (capacity <= 0 || profits.empty() || weights.size() != profits.size() ||
            currentIndex >= profits.size())
        {
            return 0;
        }

        // check if we have not already processed a similar sub-problem
        if (!dp[currentIndex][capacity])
        {
            // recursive call after choosing the items at the currentIndex, note that we
            // recursive call on all items as we did not increment currentIndex
            int profit1 = 0;
            if (weights[currentIndex] <= capacity)
            {
                profit1 =
                    profits[currentIndex] +
                    knapsackRecursive(dp, profits, weights, capacity - weights[currentIndex], currentIndex);
            }

            // recursive call after excluding the element at the currentIndex
            int profit2 = knapsackRecursive(dp, profits, weights, capacity, currentIndex + 1);

            dp[currentIndex][capacity] = max(profit1, profit2);
        }

        return dp[currentIndex][capacity];
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