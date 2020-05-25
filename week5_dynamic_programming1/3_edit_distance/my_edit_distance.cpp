#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int edit_distance(const string &str1, const string &str2)
{
    int len1 = str1.length();
    int len2 = str2.length();

    int d[len1 + 1][len2 + 1];

    for (int i = 0; i <= len2; i++)
        d[0][i] = i;
    for (int i = 0; i <= len1; i++)
        d[i][0] = i;

    int insertion, deletion, match, mismatch;

    for (int j = 1; j <= len2; j++)
    {
        for (int i = 1; i <= len1; i++)
        {
            insertion = d[i][j - 1] + 1;
            deletion = d[i - 1][j] + 1;
            match = d[i - 1][j - 1];
            mismatch = d[i - 1][j - 1] + 1;

            if (str1[i] == str2[j])
                d[i][j] = min(min(insertion, deletion), match);
            else
                d[i][j] = min(min(insertion, deletion), mismatch);
        }
    }

    return d[len1][len2];
}

int main()
{
    string str1;
    string str2;
    cin >> str1 >> str2;
    cout << edit_distance(str1, str2) << endl;
    return 0;
}
