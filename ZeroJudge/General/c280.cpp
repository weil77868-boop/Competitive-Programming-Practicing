/*
 * Problem : ZeroJudge c280. 三角形又來囉~
 * Date : 2026/10
 * Tag : Math, DP (初學DP!!10/14)
 */
#include <iostream>
using namespace std;

long long A[82];

int main() {
  A[1] = 1;
  A[2] = 1;
  for (int i = 3; i <= 81; i++) {
    A[i] = A[i - 1] + A[i - 2];
  }
  int n;
  while (cin >> n) {
    if (n) cout << A[n] << '\n';
  }
  return 0;
}
