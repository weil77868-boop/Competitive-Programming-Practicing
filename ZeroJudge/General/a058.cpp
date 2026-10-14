/*
 * Problem : ZeroJudge a058. MOD3
 * Date : 2026/10
 * Tag : Math
 */
#include <iostream>
using namespace std;

int c[3];

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    c[n % 3]++;
  }
  cout << c[0] << ' ' << c[1] << ' ' << c[2] << '\n';
  return 0;
}
