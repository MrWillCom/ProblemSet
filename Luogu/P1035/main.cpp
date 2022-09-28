#include <iostream>
using namespace std;

int main()
{
  int k;
  cin >> k;

  int n = 1;
  double sn = 0;
  while (sn <= k)
  {
    sn += 1 / (double)n;
    n++;
  }

  cout << n - 1 << endl;

  return 0;
}
