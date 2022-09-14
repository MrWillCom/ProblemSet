#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  int expected_amount;
  cin >> expected_amount;

  int min_actual_price = 0;

  for (int i = 0; i < 3; i++)
  {
    int amount_per_pack, price_per_pack;
    cin >> amount_per_pack >> price_per_pack;

    int actual_amount = ceil(expected_amount / amount_per_pack);

    if (expected_amount % amount_per_pack != 0)
    {
      actual_amount++;
    }

    int actual_price = actual_amount * price_per_pack;

    if (min_actual_price == 0 || min_actual_price > actual_price)
    {
      min_actual_price = actual_price;
    }
  }

  cout << min_actual_price << endl;

  return 0;
}
