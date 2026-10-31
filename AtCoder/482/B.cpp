/*
 * Problem : AtCoder ABC 482 B - Blank Bingo
 * Date : 2026/10
 * Tag : Function, Brute Force
 * 解題思路 :
 * 分別計算 5x5 網格中所有 5 個橫列、5 個直行與 2 個對角線已標記 ('o') 的最大數量，
 * 達成賓果所需的最小額外標記數即為 5 減去該最大已標記數量。
 */
#include <cmath>
#include <iostream>
#include <string>
using namespace std;

int sum(string s[5]) {
  int ans = 0, x1 = 0, x2 = 0;
  for (int i = 0; i < 5; i++) {
    int r = 0;
    for (int j = 0; j < 5; j++) {
      if (s[i][j] == 'o') r++;
    }
    ans = max(ans, r);
  }
  for (int i = 0; i < 5; i++) {
    int c = 0;
    for (int j = 0; j < 5; j++) {
      if (s[j][i] == 'o') c++;
    }
    ans = max(ans, c);
  }
  for (int i = 0; i < 5; i++) {
    if (s[i][i] == 'o') x1++;
  }
  ans = max(ans, x1);
  for (int i = 0; i < 5; i++) {
    if (s[i][4 - i] == 'o') x2++;
  }
  ans = max(ans, x2);
  return ans;
}

int main() {
  string grid[5];
  for (int i = 0; i < 5; i++) cin >> grid[i];
  cout << 5 - sum(grid) << '\n';
}
