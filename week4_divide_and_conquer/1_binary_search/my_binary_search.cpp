#include <iostream>
using namespace std;

int binary_search(int arr[], int low, int high, int key)
{
    if (low > high)
        return -1;
    int mid = low + ((high - low) / 2);

    if (arr[mid] == key)
        return mid;
    else if (key < arr[mid])
        return binary_search(arr, low, mid - 1, key);
    else
        return binary_search(arr, mid + 1, high, key);
}

int main()
{
    int n;
    cin >> n;
    int elements[n];
    for (int i = 0; i < n; i++)
        cin >> elements[i];

    // cout << n << endl;
    // for (int i = 0; i < n; i++)
    //     cout << elements[i] << " ";
    // cout << endl;

    int k;
    cin >> k;
    int inputs[k];
    for (int i = 0; i < k; i++)
        cin >> inputs[i];

    // cout << k << endl;
    // for (int i = 0; i < k; i++)
    // {
    //     cout << inputs[i] << " ";
    // }

    for (int i = 0; i < k; i++)
    {
        cout << binary_search(elements, 0, n - 1, inputs[i]) << " ";
    }

    return 0;
}