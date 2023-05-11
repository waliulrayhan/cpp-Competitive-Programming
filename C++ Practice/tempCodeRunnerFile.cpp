int main()
{
    cout << "Enter the weights of the items, press -1 to stop" << endl;

    vector<int> weights;

    while (true)
    {
        int weight;
        cin >> weight;

        if (weight == -1)
            break;

        weights.push_back(weight);
    }

    cout << "Enter the values of each item, press -1 to stop" << endl;

    vector<int> values;

    while (true)
    {
        int value;
        cin >> value;

        if (value == -1)
            break;

        values.push_back(value);
    }

    cout << "Enter the capacity of the knapsack" << endl;

    int capacity;
    cin >> capacity;

    cout << "The maximum value possible based on current list is: " << fractional_knapsack(weights, values, capacity) << endl;
}