/*
 * Problem : ZeroJudge a034.二進位制轉換
 * Date : 2026/10
 * Tag : Math
 */
#include <iostream>
using namespace std;

int a[100];

int main() {
  int n, c;
  while (cin >> n) {
    if (n == 0) cout << '0\n';
    c = 0;
    while (n > 0) {
      a[c] = n % 2;
      c++;
      n /= 2;
    }
    for (int i = c - 1; i >= 0; i--) {
      cout << a[i];
    }
    cout << '\n';
  }
  return 0;
}
