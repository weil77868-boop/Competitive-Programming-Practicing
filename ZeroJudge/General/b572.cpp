/*
 * Problem : ZeroJudge b572.忘了東西的傑克
 * Date : 2026/10
 * Tag : Time Complexity
 */
#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int h1, m1, h2, m2, l;
    cin >> h1 >> m1 >> h2 >> m2 >> l;
    int t1 = h1 * 60 + m1, t2 = h2 * 60 + m2;
    int ans = t2 - t1;
    cout << (ans >= l ? "Yes" : "No") << '\n';
  }
  return 0;
}
