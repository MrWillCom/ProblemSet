#include <iostream>
using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;

  double cash = a + 0.1 * b;
  int amount = cash / 1.9;

  cout << amount << endl;

  return 0;
}
