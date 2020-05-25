#include <bits/stdc++.h>
using namespace std;

struct item
{
    float value, weight, fraction;
};

bool compare(const item &item1, const item &item2)
{
    return item1.fraction > item2.fraction;
}

float fill_knapsack(item arr[], int n, int w)
{
    float weight_left = w, max_val = 0.0000;
    int i = 0;

    while (weight_left)
    {
        item x = arr[i];

        //check if whole item can fit:
        if (x.weight <= weight_left)
        {
            max_val += x.value;
            weight_left -= x.weight;
            i++;
        }
        else
        {
            max_val += (x.fraction) * weight_left;
            weight_left = 0;
        }
    }

    return max_val;
}

float get_answer(item arr[], int n, int w)
{
    sort(arr, arr + n, compare);

    return fill_knapsack(arr, n, w);
}

int main()
{
    int n, w;
    cin >> n >> w;

    item arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].value;
        cin >> arr[i].weight;
        arr[i].fraction = ((arr[i].value) / (arr[i].weight));
    }

    cout << fixed << setprecision(8) << get_answer(arr, n, w) << endl;

    return 0;
}