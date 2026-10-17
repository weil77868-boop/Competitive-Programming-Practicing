/*
 * Problem : AtCoder ABC A. Grapes
 * Date : 2026/10
 * Tag : Math, Functions
 */
#include <iostream>
#include <vector>
using namespace std;

// ==========================================
// 【版本二】數學優化解 (Math)
// 時間複雜度：O(N)
// 說明：透過除法與餘數直接計算每個人分到的數量，完美避開大迴圈。
// ==========================================
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
// ==========================================
// 【版本一】直覺模擬 (Brute Force)
// 時間複雜度：O(M)
// 說明：用迴圈一顆一顆把葡萄發完。當 m 的數值極大（例如 10^9）時會超時。
// ==========================================
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
}
*/
