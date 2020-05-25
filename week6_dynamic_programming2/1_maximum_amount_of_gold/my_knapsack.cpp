#include <iostream>
using namespace std;

int get_max_value(int W, int n, int arr[])
{
    int value[n + 1][W + 1];
    int temp;
    for (int i = 0; i <= W; i++)
        value[0][i] = 0;

    for (int i = 0; i <= n; i++)
        value[i][0] = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int w = 1; w <= W; w++)
        {
            value[i][w] = value[i - 1][w];
            if (arr[i - 1] <= w)
            {
                temp = value[i - 1][w - arr[i - 1]] + arr[i - 1];
                if (temp > value[i][w])
                    value[i][w] = temp;
            }
        }
    }

    return value[n][W];
}

int main()
{
    int W;
    int n;
    cin >> W >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << get_max_value(W, n, arr) << endl;

    return 0;
}