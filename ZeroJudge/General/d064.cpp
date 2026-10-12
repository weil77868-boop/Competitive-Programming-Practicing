/*
 * Problem : ZeroJudge d064.ㄑㄧˊ 數？
 * Date : 2026/10
 * Tag : Math
 */
#include <iostream>
using namespace std;

int main() {
  int n;
  while (cin >> n) {
    cout << ((n % 2) ? "Odd" : "Even") << '\n';
  }
  return 0;
}
