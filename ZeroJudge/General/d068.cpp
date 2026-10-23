/*
 * Problem : ZeroJudge d068. 該減肥了！
 * Date : 2026/10
 * Tag : Simulation, Math
 */
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  cout << (n > 50 ? n - 1 : n) << '\n';
  return 0;
}
