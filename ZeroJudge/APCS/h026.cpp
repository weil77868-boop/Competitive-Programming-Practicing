/*
 * Problem : ZeroJudge h026.1. 猜拳 APCS 2020/01
 * Date : 2026/10
 * Tag : Simulation, Function
 */
#include <iostream>
#include <vector>
using namespace std;

int W(int s) {
  if (s == 0) return 5;
  if (s == 2) return 0;
  if (s == 5) return 2;
  return 0;
}

int judge(int b, int s) {
  if ((b == 0 && s == 2) || (b == 2 && s == 5) || (b == 5 && s == 0)) return 1;
  if ((b == 0 && s == 5) || (b == 2 && s == 0) || (b == 5 && s == 2)) return -1;
  return 0;
}

int main() {
  int f, n;
  cin >> f >> n;
  bool draw = true;
  vector<int> y(n);
  for (int i = 0; i < n; i++) cin >> y[i];
  for (int i = 0; i < n; i++) {
    if (i >= 2 && y[i - 1] == y[i - 2]) {
      f = W(y[i - 1]);
    } else {
      (i > 0 ? f = y[i - 1] : f);
    }
    cout << f << ' ';
    if (judge(f, y[i]) == 1) {
      cout << ": Won at round " << i + 1 << '\n';
      draw = false;
      break;
    }
    if (judge(f, y[i]) == -1) {
      cout << ": Lost at round " << i + 1 << '\n';
      draw = false;
      break;
    }
  }
  if (draw) cout << ": Drew at round " << n << '\n';
  return 0;
}
