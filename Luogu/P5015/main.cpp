#include <iostream>
#include <string>

using namespace std;

int main() {
    int count = 0;
    string str;

    while (cin >> str) {
        for (int i = 0; i <= str.size(); i++) {
            char current = str[i];
            if (current >= 'a' && current <= 'z') {
                count++;
            } else if (current >= 'A' && current <= 'Z') {
                count++;
            } else if (current >= '0' && current <= '9') {
                count++;
            }
        }
    }

    cout << count;

    return 0;
}
