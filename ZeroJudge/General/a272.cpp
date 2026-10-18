/*
 * Problem : ZeroJudge a272. 猥瑣罐頭下樓梯
 * Date : 2026/10
 * Tag : Math, DP
 */
#include <iostream>
using namespace std;

int fib[20017];

int main() {
  fib[1] = 1;
  fib[2] = 2;
  for (int i = 3; i <= 20016; i++) {
    fib[i] = (fib[i - 1] + fib[i - 2]) % 10007;
  }
  long long n;
  while (cin >> n) {
    n %= 20016;  // 皮薩諾週期(10007)
    cout << fib[n] << '\n';
  }
  return 0;
}
