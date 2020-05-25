#include <bits/stdc++.h>
using namespace std;

int get_pisano_period(int m)
{
    int a = 0, b = 1, c = a + b;
    for (int i = 0; i < m * m; i++)
    {
        c = (a + b) % m;
        a = b;
        b = c;
        if (a == 0 && b == 1)
            return i + 1;
    }
    return 0;
}

int get_answer(long long n, long long m)
{
    long long remainder = n % get_pisano_period(m);

    long long first = 0;
    long long second = 1;

    long long res = remainder;

    for (int i = 1; i < remainder; i++)
    {
        res = (first + second) % m;
        first = second;
        second = res;
    }

    return res % m;
}

int main()
{
    // cout << get_answer(2816213588, 239) << endl;
    int n, m;
    cin >> n >> m;
    cout << get_answer(n, m) << endl;

    return 0;
}