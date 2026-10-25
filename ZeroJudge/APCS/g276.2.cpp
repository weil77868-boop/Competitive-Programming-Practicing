/*
 * Problem : ZeroJudge g276. 2. 魔王迷宮
 * Date : 2026/10
 * Tag : Simulation
 * 解題思路 :
 * 判斷「存在有無」時用 bool 陣列紀錄(魔王、炸彈)，另開一陣列紀錄需清除的炸彈，在更新完所有魔王的位置後再更新 bomb 陣列
 * 另用 alive 陣列紀錄魔王是否還存在
 */
#include <iostream>
#include <vector>
using namespace std;

bool inside(int n, int m, int x, int y) {
  return x >= 0 && x < n && y >= 0 && y < m;
}

int main() {
  int n, m, k;
  cin >> n >> m >> k;
  vector<int> r(k), c(k), s(k), t(k);
  for (int i = 0; i < k; i++) cin >> r[i] >> c[i] >> s[i] >> t[i];
  vector<vector<bool>> bomb(n, vector<bool>(m, false));
  vector<bool> alive(k, true);
  int alive_cnt = k;
  while (alive_cnt > 0) {
    for (int i = 0; i < k; i++) {
      if (!alive[i]) continue;
      bomb[r[i]][c[i]] = true;
      r[i] += s[i];
      c[i] += t[i];
    }
    vector<pair<int, int>> clean;
    for (int i = 0; i < k; i++) {
      if (!alive[i]) continue;
      if (!inside(n, m, r[i], c[i])) {
        alive[i] = false;
        alive_cnt--;
      } else if (bomb[r[i]][c[i]]) {
        alive[i] = false;
        alive_cnt--;
        clean.push_back({r[i], c[i]});
      }
    }
    for (int i = 0; i < (int)clean.size(); i++) {
      int x = clean[i].first;
      int y = clean[i].second;
      bomb[x][y] = false;
    }
  }
  int ans = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (bomb[i][j]) ans++;
    }
  }
  cout << ans << '\n';
  return 0;
}
