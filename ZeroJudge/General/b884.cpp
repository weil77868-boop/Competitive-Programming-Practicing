/*
 * Problem : ZeroJudge b884.電腦教室的傑克
 * Date : 2026/10
 * Tag : Math, Function
 */
#include <cmath>
#include <iostream>
using namespace std;

int yee(int x, int y) { return 100 - x - y; }

int main() {
  int n;
  cin >> n;
  while (n--) {
    int a, b;
    cin >> a >> b;
    int v = yee(a, b);
    if (v > 0 && v <= 30) {
      cout << "sad!\n";
    } else if (v > 30 && v <= 60) {
      cout << "hmm~~\n";
    } else if (v > 60 && v < 100) {
      cout << "Happyyummy\n";
    } else {
      cout << "evil!!\n";
    }
  }
  return 0;
}
