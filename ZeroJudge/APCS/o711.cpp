/*
 * Problem : ZeroJudge o711.1. 裝飲料 APCS 2024/10
 * Date : 2026/10
 * Tag : Simulation, Math
 */
#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int t, w1, w2, h1, h2, v1, v2, r, max_r = 0, h3 = 0;
  cin >> t >> w1 >> w2 >> h1 >> h2;
  v1 = w1 * w1 * h1, v2 = w2 * w2 * h2;
  while (t--) {
    int v3;  // h3 = 目前水量, r = 上升水量
    cin >> v3;
    r = 0;
    if (h3 <= h1) {
      if (v3 <= v1 - (w1 * w1 * h3)) {
        r = v3 / (w1 * w1);
        h3 += r;
      } else {
        r = (h1 - h3) + (v3 - (v1 - (w1 * w1 * h3))) / (w2 * w2);
        h3 += r;
      }
    } else if (h3 <= h1 + h2) {
      r = v3 / (w2 * w2);
      h3 += r;
    }
    if (h3 > (h1 + h2)) {
      r -= (h3 - (h1 + h2));
      h3 = h1 + h2;
    }
    max_r = max(r, max_r);
  }
  cout << max_r << '\n';
  return 0;
}
