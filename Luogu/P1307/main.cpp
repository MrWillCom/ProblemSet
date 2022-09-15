#include <iostream>
using namespace std;

int main()
{
  int source;
  cin >> source;

  if (source == 0)
  {
    cout << "0" << endl;
    return 0;
  }

  if (source < 0)
  {
    cout << "-";
    source = -source;
  }

  while (source % 10 == 0)
  {
    source = source / 10;
  }

  string str = to_string(source);
  for (int i = 0; i < str.size(); i++)
  {
    cout << str[str.size() - i - 1];
  }

  cout << endl;

  return 0;
}
