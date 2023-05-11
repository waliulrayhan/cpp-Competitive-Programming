
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool compare(pair<float, int> p1, pair<float, int> p2)
{
    return p1.first > p2.first;
}

int fractional_knapsack(vector<int> weights, vector<int> values, int capacity)
{
    int len = weights.size();
    int total_value = 0;

    vector<pair<float, int>> ratio(len, make_pair(0.0, 0));

    for (int i = 0; i < len; i++)
        ratio[i] = make_pair(values[i] / weights[i], i);

    sort(ratio.begin(), ratio.end(), compare);

    for (int i = 0; i < len; i++)
    {
        if (capacity == 0)
            break;

        int index = ratio[i].second;

        if (weights[index] <= capacity)
        {

            capacity -= weights[index];

            total_value += values[index];
        }
        else
        {

            int value_to_consider = values[index] * (float(capacity) / float(weights[index]));
            total_value += value_to_consider;
            capacity = 0;
        }
    }

    return total_value;
}

int main()
{
    cout << "Enter how many items: ";
    int n;
    cin >> n;

    cout << "Enter the weights of the items: " << endl;

    vector<int> weights;

    for (size_t i = 0; i < n; i++)
    {
        int weight;
        cin >> weight;

        weights.push_back(weight);
    }

    cout << "Enter the values of each item: " << endl;

    vector<int> values;

    for (size_t i = 0; i < n; i++)
    {
        int value;
        cin >> value;

        values.push_back(value);
    }

    cout << "Enter the capacity of the knapsack" << endl;

    int capacity;
    cin >> capacity;

    cout << "The maximum value possible based on current list is: " << fractional_knapsack(weights, values, capacity) << endl;
}
