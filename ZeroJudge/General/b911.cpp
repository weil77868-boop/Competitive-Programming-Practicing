/*
 * Problem : ZeroJudge b911. 我想跟Kevin借筷子系列4
 * Date : 2026/10
 * Tag : Math, Functions
 * 解題思路 :
 * 注意到每次砍數列的中段，循環直到每段都砍到0，也就是要砍 log2(n) + 1 次，加 1e-9 以防止浮點數精度誤差
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
