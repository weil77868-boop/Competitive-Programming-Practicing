/*
 * Problem : ZeroJudge b759.我明明就有說過= =
 * Date : 2026/10
 * Tag : String, Math
 */
#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  cin >> s;
  int len = s.size();
  s += s; // 把字串複製搬到後面
  for (int i = 0; i < len; i++) {
    for (int j = i; j < len + i; j++) {
      cout << s[j];
    }
    cout << '\n';
  }
  return 0;
}
