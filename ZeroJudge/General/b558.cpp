//b558.求數列第 n 項
#include <iostream>
using namespace std;

int main() {
  int n;
  while (cin >> n) {  // a_i = i * (i - 1) / 2 + 1
    cout << n * (n - 1) / 2 + 1 << '\n';
  }
  return 0;
}
