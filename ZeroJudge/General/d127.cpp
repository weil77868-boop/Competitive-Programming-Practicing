/*
 * Problem : ZeroJudge d127. 二、牧場面積
 * Date : 2026/10
 * Tag : Math, Function
 */
#include <cmath>
#include <iostream>
using namespace std;

long long A(long long n) {
  long long ans = n * n / 16;
  return ans;
}

int main() {
  long long n;
  while (cin >> n) {
    cout << A(n) << '\n';
  }
  return 0;
}
