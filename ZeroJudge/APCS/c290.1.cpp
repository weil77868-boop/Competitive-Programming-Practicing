//2017/3-1
#include <cmath>
#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  cin >> s;
  int odd = 0;
  int even = 0;
  for (int i = 0; i < (int)s.size(); i++) {
    if (i % 2 != 0) {
      odd += (s[i] - '0');
    } else {
      even += (s[i] - '0');
    }
  }
  cout << abs(even - odd) << endl;
}
