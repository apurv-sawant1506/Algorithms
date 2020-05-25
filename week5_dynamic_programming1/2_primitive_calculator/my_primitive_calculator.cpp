#include <bits/stdc++.h>
using namespace std;

int dp_change(int n, int coins[])
{
    int min_operation[n];
    min_operation[0] = 0;
    min_operation[1] = 0;
    int num = 0;

    if (n < 2)
        return min_operation[n];

    for (int i = 2; i <= n; i++)
    {
        min_operation[i] = INT_MAX;
        if (i % 2 == 0)
        {
            num = min_operation[(int)i / 2] + 1;
            if (num < min_operation[i])
                min_operation[i] = num;
        }
        else if (i % 3 == 0)
        {
            num = min_operation[(int)i / 3] + 1;
            if (num < min_operation[i])
                min_operation[i] = num;
        }
        else
        {
            min_operation[i] = min_operation[i - 1] + 1;
        }
    }

    return min_operation[n];
}



int main()
{
    int n;
    cin >> n;

    int coins[] = {3, 2, 1};

    cout << dp_change(n, coins) << endl;

    return 0;
}