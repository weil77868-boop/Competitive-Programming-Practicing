/*
 * Problem : ZeroJudge a040. 阿姆斯壯數
 * Date : 2026/10
 * Tag : Math, Brute Force, Functions
 */
#include <cmath>
#include <iostream>
#include <string>
using namespace std;

// 自製一個安全的整數次方函數，避免 浮點數 誤差與溢位
long long power(long long base, int exp) {
  long long res = 1;
  for (int i = 0; i < exp; i++) {
    res *= base;
  }
  return res;
}

bool armstrong(int n) {
  string s = to_string(n);
  int len = s.size(), ans = 0;
  for (int i = 0; i < len; i++) {
    ans += power((s[i] - '0'), len);
  }
  return (ans == n);
}

int main() {
  int n, m;
  while (cin >> n >> m) {
    bool no = true;
    for (int i = n; i <= m; i++) {
      if (armstrong(i)) {
        if (!no) cout << ' ';
        cout << i;
        no = false;
      }
    }
    if (no) cout << "none";
    cout << '\n';
  }
  return 0;
}
