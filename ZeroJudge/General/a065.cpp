//a065.提款卡密碼
#include <cmath>
#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  cin >> s;
  for (int i = 0; i < (int)s.size() - 1; i++) {
    cout << abs(s[i] - s[i + 1]);
  }
  cout << '\n';
  return 0;
}
