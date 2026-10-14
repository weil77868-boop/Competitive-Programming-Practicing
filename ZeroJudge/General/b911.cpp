/*
 * Problem : ZeroJudge b911. 我想跟Kevin借筷子系列4
 * Date : 2026/10
 * Tag : Math, Functions
 */
#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int n;
  while (cin >> n) {
    cout << floor(log2(n) + 1e-9) + 1 << '\n';
  }
  return 0;
}
