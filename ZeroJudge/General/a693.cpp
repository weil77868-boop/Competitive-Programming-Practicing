/*
 * Problem : ZeroJudge a693. 吞食天地
 * Date : 2026/10
 * Tag : Prefix Sum, Math, Functions
 */

#include <iostream>
#include <vector>
using namespace std;

// ==========================================
// 【版本二】優化解：前綴和 (Prefix Sum) -> AC (通過)
// 時間複雜度：預處理 O(N)，單次查詢 O(1)，總時間 O(N + M)
// 說明：利用 pref[r] - pref[l-1] 將區間總和查詢降至常數時間。
// ==========================================
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, m;
  while (cin >> n >> m) {
    vector<int> pref(n + 1);
    for (int i = 1; i < n + 1; i++) {
      int x;
      cin >> x;
      pref[i] = pref[i - 1] + x;
    }
    while (m--) {
      int l, r;
      cin >> l >> r;
      cout << pref[r] - pref[l - 1] << '\n';
    }
  }
  return 0;
}

// ==========================================
// 【版本一】暴力解 (Brute Force) -> 0.9s 壓線過(優化後是 37ms)
// 時間複雜度：O(M * N)
// 說明：每次查詢都用迴圈從 L 加到 R，當查詢次數與區間很大時超時。
// ==========================================
/*
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, m;
  while (cin >> n >> m) {
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) cin >> a[i];

    for (int i = 0; i < m; i++) {
      int l, r;
      cin >> l >> r;
      long long sum = 0;
      for (int j = l; j <= r; j++) {
        sum += a[j];
      }
      cout << sum << '\n';
    }
  }
  return 0;
}
*/
