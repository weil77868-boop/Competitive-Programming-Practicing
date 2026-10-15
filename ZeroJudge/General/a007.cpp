/*
 * Problem : ZeroJudge a007. 判斷質數
 * Date : 2026/10
 * Tag : Math, Function
 */
#include <cmath>
#include <iostream>
using namespace std;

int g[500000];
int t = 0;

// 質數表
void p() {
  for (int i = 2; i <= 50000; i++) {
    bool b = true;
    for (int j = 0; j < t; j++) {
      if (g[j] * g[j] > i) break;
      if (i % g[j] == 0) {
        b = false;
        break;
      }
    }
    if (b) g[t++] = i;
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  p();

  long long n;
  while (cin >> n) {
    // 判斷質數
    bool yes = true;
    for (int i = 0; i < t; i++) {
      if ((long long)g[i] * g[i] > n) break;
      if (n % g[i] == 0) {
        yes = false;
        break;
      }
    }
    cout << (yes ? "質數\n" : "非質數\n");
  }
  return 0;
}
