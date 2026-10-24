/*
 * Problem : AtCoder ABC 476 B - Wild Card
 * Date : 2026/10
 * Tag : String, Simulation
 * 解題思路 :
 * 逐字元比對兩個字串，若對應位置字元不同且比對字串該位置不是 '*' 則回傳 No，否則全部符合後回傳 Yes。
 */
#include <iostream>
#include <string>
using namespace std;

int main() {
  int n;
  cin >> n;
  string s, t;
  cin >> s >> t;
  for (int i = 0; i < n; i++) {
    if (s[i] != t[i] && t[i] != '*') {
      cout << "No\n";
      return 0;
    }
  }
  cout << "Yes\n";
  return 0;
}
