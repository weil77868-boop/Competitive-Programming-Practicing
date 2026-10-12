/*
 * Problem : ZeroJudge d124. 3的倍數
 * Date : 2026/10
 * Tag : Math
 */
#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  while (cin >> s) {
    int len = s.size(), sum = 0;
    for (int i = 0; i < len; i++) sum += (s[i] - '0');
    cout << ((sum % 3) ? "no" : "yes") << '\n';
  }
  return 0;
}
