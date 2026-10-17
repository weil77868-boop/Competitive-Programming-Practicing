/*
 * Problem : AtCoder ABC A. Grapes
 * Date : 2026/10
 * Tag : Math, Functions
 */
#include <iostream>
#include <vector>
using namespace std;

//數學優化
int main() {
  int n, m;
  cin >> n >> m;
  vector<int> s(n);
  int a = m / n;
  int b = m % n;
  for (int i = 0; i < n; i++) {
    s[i] = a;
    if (i < b) s[i] += 1;
    if (i) cout << ' ';
    cout << s[i];
  }
  cout << '\n';
  return 0;
}
//直覺模擬
/*
int main() {
  int n, m;
  cin >> n >> m;
  vector<int> s(n);
  for (int i = 0;; i++) {
    if (i == n) i = 0;
    s[i] += 1;
    m--;
    if (m == 0) break;
  }
  for (int i = 0; i < n; i++) {
    if (i) cout << ' ';
    cout << s[i];
  }
  cout << '\n';
  return 0;
  */
}
