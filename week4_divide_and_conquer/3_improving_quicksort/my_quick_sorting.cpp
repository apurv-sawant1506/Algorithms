#include <bits/stdc++.h>
using namespace std;

typedef struct pivot_index
{
  int lower, higher;
} index;

// typedef struct pivot_index index;

index partition2(vector<int> &a, int l, int r)
{
  int pivot = a[r];
  index p_i;
  p_i.lower = l;
  p_i.higher = l;

  int temp;

  for (int i = l; i < r; i++)
  {
    if (a[i] < pivot)
    {
      //remove arr[i] from the vector
      //insert it at position vector.begin() + p_i.lower
      //dont't increment p_i.lower
      temp = a[i];
      a.erase(a.begin() + i);
      a.insert(a.begin() + p_i.lower, temp);
      p_i.higher += 1;
      p_i.lower += 1;
    }
    else if (a[i] == pivot)
    {
      swap(a[i], a[p_i.higher]);
      p_i.higher++;
    }
  }
  swap(a[p_i.higher], a[r]);

  return p_i;
}

void randomized_quick_sort(vector<int> &a, int l, int r)
{
  if (l >= r)
  {
    return;
  }

  int k = l + rand() % (r - l + 1);
  swap(a[l], a[k]);
  index x = partition2(a, l, r);

  randomized_quick_sort(a, l, x.lower - 1);
  randomized_quick_sort(a, x.higher + 1, r);
}

int main()
{
  int n;
  cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); ++i)
  {
    cin >> a[i];
  }
  randomized_quick_sort(a, 0, a.size() - 1);

  for (size_t i = 0; i < a.size(); ++i)
  {
    cout << a[i] << ' ';
  }

  return 0;
}
