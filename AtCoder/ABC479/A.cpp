/*
 * Problem : AtCoder ABC A. Odd Index Sum
 * Date : 2026/10
 * Tag : Functions, Math
 */
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, sum = 0;
  cin >> n;
  vector<int> num(n);
  for (int i = 0; i < n; i++) {
    cin >> num[i];
    if (i % 2 == 0) sum += num[i];
  }
  cout << sum << '\n';
  return 0;
}
