// S(n) = F(n+2) – 1
#include <iostream>
using namespace std;

int fib(long long n)
{
  int a = 0, b = 1, c;
  long long i;

  if (n == 0)
    return a;
  for (i = 2; i <= n; i++)
  {
    c = (a + b) % 10;
    a = b;
    b = c;
  }
  return b;
}

int get_answer(long long n)
{
  // S(n) = F(n+2) – 1

  int fib_n = fib(n + 2);

  if (fib_n == 0)
  {
    return 9;
  }

  return fib_n - 1;
}

int main()
{
  long long n;
  cin >> n;

  cout << (get_answer(n) % 10) << endl;

  return 0;
}