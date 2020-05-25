#include <iostream>
using namespace std;

struct element
{
    int mass, value;
};

typedef struct element item;

int get_max_value(int n, int weight, item w[])
{
    int value[weight];
    value[0] = 0;
    int temp;

    for (int i = 1; i <= weight; i++)
    {
        value[i] = 0;
        for (int j = 0; i < n; j++)
        {
            if (w[j].mass <= i)
            {
                temp = value[i - w[j]] + w[j].value;
                if (temp > value[i])
                {
                    value[i] = temp;
                }
            }
        }
    }

    return value[weight];
}

int main()
{
    int weight; //total weight of the knapsack
    int n;      //total number of items
    cin >> weight;
    cin >> n;

    item w[n];
    for (int i = 0; i < n; i++)
    {
        cin >> w[i].mass;
        cin >> w[i].value;
    }

    cout << get_max_value(n, weight, w) << endl;

    return 0;
}