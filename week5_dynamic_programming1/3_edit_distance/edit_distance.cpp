#include <iostream>
#include <string>
using namespace std;

// using std::string;

int edit_distance(const string &str1, const string &str2)
{
  //write your code here
  cout << "str length=" << strlen(str1) << endl;
}

int main()
{
  string str1;
  string str2;
  cin >> str1 >> str2;
  cout << edit_distance(str1, str2) << stdendl;
  return 0;
}
