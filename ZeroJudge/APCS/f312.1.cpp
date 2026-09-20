//2020/10-1
#include <iostream>
#include <algorithm>
using namespace std;

int y(int x, int a, int b, int c) { return a * x * x + b * x + c; }

int main() {
  int a1, b1, c1, a2, b2, c2, n;
  cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2 >> n;
  int ans = -1e9;
  for (int i = 0; i <= n; i++) {
    ans = max(ans, y(i, a1, b1, c1) + y(n - i, a2, b2, c2));
  }
  cout << ans << endl;
  return 0;
}
