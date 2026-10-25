/*
 * Problem : AtCoder ABC 477 B
 * Date : 2026/10
 * Tag : Simulation, Two Pointers
 * 解題思路 :
 * 檢查環狀陣列中每個元素與其他所有元素的絕對差值是否皆大於或等於 d，
 * 利用取餘數處理環狀邊界，若符合條件則計數並記錄其 1-based 索引。
 */
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, d;
  cin >> n >> d;
  vector<int> A(n);
  for (int i = 0; i < n; i++) cin >> A[i];
  int ans = 0;
  vector<int> S;
  for (int i = 0; i < n; i++) {
    bool yes = true;
    for (int j = 1; j < n; j++) {
      if (abs(A[i] - A[(i + j) % n]) < d) {
        yes = false;
        break;
      }
    }
    if (yes) {
      ans++;
      S.push_back(i);
    }
  }
  cout << ans << '\n';
  for (int i = 0; i < (int)S.size(); i++) {
    if (i) cout << ' ';
    cout << S[i] + 1;
  }
  cout << '\n';
  return 0;
}
