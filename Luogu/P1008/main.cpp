#include <iostream>
#include <string>
using namespace std;

int main()
{
  const string acceptable_numbers = "123456789";

  int a, b, c;
  a = 111; // starts from `111`

  while (a <= 329) // ends at `329`
  {
    bool acceptable = true;

    b = 2 * a;
    c = 3 * a;

    string combined_string = to_string(a) + to_string(b) + to_string(c);

    // avoid illegal characters
    for (int i = 0; i < combined_string.size(); i++)
    {
      if (acceptable_numbers.find(combined_string[i]) == -1)
      {
        acceptable = false;
      }
    }

    // avoid duplicate characters
    for (int i = 0; i < combined_string.size(); i++)
    {
      for (int j = 0; j < combined_string.size(); j++)
      {
        if (i != j)
        {
          if (combined_string[i] == combined_string[j])
          {
            acceptable = false;
            i = j = combined_string.size(); // leave the loop
          }
        }
      }
    }

    if (acceptable)
    {
      cout << a << " " << b << " " << c << endl;
    }

    a++;
  }

  return 0;
}
