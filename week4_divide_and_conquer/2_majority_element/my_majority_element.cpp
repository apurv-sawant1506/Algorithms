#include <iostream>
using namespace std;

int get_count(int arr[], int low, int high, int element)
{
    int count = 0;

    for (int i = low; i <= high; i++)
    {
        if (arr[i] == element)
            count++;
    }

    return count;
}

int majority_element(int arr[], int low, int high)
{
    if (low == high)
        return arr[low];

    int mid = (low + (high - low) / 2);

    int left = majority_element(arr, low, mid);
    int right = majority_element(arr, mid + 1, high);

    if (left == right)
        return left;

    int left_count = get_count(arr, low, high, left);
    int right_count = get_count(arr, low, high, right);

    // if (left_count == right_count)
    //     return -1;
    if (left_count > right_count)
        return left_count;
    else
        return right_count;
}

int get_answer(int arr[], int n)
{
    int result = majority_element(arr, 0, n - 1);
    if (result > (n / 2))
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // cout << get_answer(arr, n) << endl;
    cout << get_answer(arr, n) << endl;

    return 0;
}