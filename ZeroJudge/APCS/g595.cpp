/*
 * Problem : ZeroJudge g595. 1. 修補圍籬
 * Date : 2026/10
 * Tag : Simulation, Greedy
 * 解題思路 :
 * 走訪圍籬陣列，當遇到高度為 0 的破損圍籬時，
 * 根據邊界條件選取相鄰圍籬的高度（若在兩端則選唯一相鄰者，否則選左右兩者中的較小值）並累加到總成本中。
 */
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> h(n);
  for (int i = 0; i < n; i++) cin >> h[i];
  int ans = 0;
  for (int i = 0; i < n; i++) {
    if (h[i] == 0) {
      if (i == n - 1) {
        ans += h[n - 2];
      } else if (i == 0) {
        ans += h[1];
      } else {
        ans += min(h[i - 1], h[i + 1]);
      }
    }
  }
  cout << ans << '\n';
  return 0;
}
