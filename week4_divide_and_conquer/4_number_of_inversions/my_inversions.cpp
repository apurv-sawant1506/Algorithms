#include <iostream>
using namespace std;

int merge(int arr[], int low, int mid, int high)
{
    int inversions = 0;
    int left_length = (mid - low) + 1;
    int right_length = (high - mid);

    int left_index = 0, right_index = 0;

    int left_array[left_length], right_array[right_length];

    for (int i = 0; i < left_length; i++)
    {
        left_array[i] = arr[low + i];
    }
    for (int i = 0; i < right_length; i++)
    {
        right_array[i] = arr[mid + 1 + i];
    }

    int k = low;

    while ((left_index < left_length) && (right_index < right_length))
    {
        if (left_array[left_index] <= right_array[right_index])
        {
            arr[k] = left_array[left_index];
            left_index++;
        }
        else
        {
            arr[k] = right_array[right_index];
            right_index++;
            inversions += ((mid - left_index) + 1);
        }

        k++;
    }

    while (right_index < right_length)
    {
        arr[k] = right_array[right_index];
        right_index++;
        k++;
    }
    while (left_index < left_length)
    {
        arr[k] = left_array[left_index];
        left_index++;
        k++;
    }

    return inversions;
}

int mergesort(int arr[], int low, int high)
{
    int count = 0;
    if (low < high)
    {
        int mid = (low + ((high - low) / 2));

        count += mergesort(arr, low, mid);
        count += mergesort(arr, mid + 1, high);

        count += merge(arr, low, mid, high);
    }

    return count;
}

int main()
{
    // int arr[]={1,20,6,4,5};
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << mergesort(arr, 0, n - 1) << endl;

    return 0;
}