#include <bits/stdc++.h>
using namespace std;

int dp_change(int n, int coins[])
{
    if (n < 5)
        return n;

    int min_change[n];
    min_change[0] = 0;
    int num = 0;

    for (int i = 1; i <= n; i++)
    {
        min_change[i] = INT_MAX;
        for (int j = 0; j < 3; j++)
        { //length of coin array is 3 hence j<3
            if (i >= coins[j])
            {
                num = min_change[i - coins[j]] + 1;
                if (num < min_change[i])
                    min_change[i] = num;
            }
        }
    }

    return min_change[n];
}

int main()
{
    int n;
    cin >> n;

    int coins[] = {4, 3, 1};

    cout << dp_change(n, coins) << endl;

    return 0;
}