#include <cmath>
#include <iostream>
using namespace std;

int ans1(int a, int b, int c) {
  int d = b * b - 4 * a * c;
  int ans = (-b + sqrt(d)) / (2 * a);
  return ans;
}

int ans2(int a, int b, int c) {
  int d = b * b - 4 * a * c;
  int ans = (-b - sqrt(d)) / (2 * a);
  return ans;
}

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  int d = b * b - 4 * a * c;
  if (d < 0) {
    cout << "No real root";
    return 0;
  }
  if (ans1(a, b, c) != ans2(a, b, c)) {
    cout << "Two different roots x1=" << max(ans1(a, b, c), ans2(a, b, c))<< " , x2=" << min(ans1(a, b, c), ans2(a, b, c));
  } else {
    cout << "Two same roots x=" << ans1(a, b, c);
  }
  cout << '\n';
  return 0;
}
