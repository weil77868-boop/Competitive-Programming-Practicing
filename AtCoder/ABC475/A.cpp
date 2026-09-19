/*
 * Problem: AtCoder ABC475 A - mnclr
 * Tag: Implementation, String
 */
#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  cin >> s;
  string ans = "";
  int len = s.size();
  for (int i = 0; i < len; i++) {
    ans += s[i];
    if (i < len - 1) {
      ans += 'o';
    }
  }
  cout << ans << endl;
  return 0;
}
