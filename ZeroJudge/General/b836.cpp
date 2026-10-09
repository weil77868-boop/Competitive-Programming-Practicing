/*
 * Problem : ZeroJudge b836.kevin戀愛攻略系列題-2 說好的霸王花呢??
 * Date : 2026/10
 * Tag : Math
 */
#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n, m;
  while (cin >> n >> m) {
    if (m == 0) {
      cout << "Go Kevin!!\n";
    } else if ((n - 1) % m == 0) {
      cout << "Go Kevin!!\n";
    } else {
      cout << "No Stop!!\n";
    }
  }
  return 0;
}
