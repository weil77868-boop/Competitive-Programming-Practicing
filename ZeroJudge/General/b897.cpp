/*
 * Problem : ZeroJudge b897. 10219 - Find the ways !
 * Date : 2026/10
 * Tag : Math, Functions
 */
#include <cmath>
#include <iostream>
using namespace std;

long long C(int n, int k) {
  int m = min(k, n - k);
  double ans = 0;
  for (int i = 1; i <= m; i++) {
    ans += log10(n - i + 1);
    ans -= log10(i);
  }
  return floor(ans) + 1;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, k;
  while (cin >> n >> k) {
    cout << C(n, k) << '\n';
  }
}
