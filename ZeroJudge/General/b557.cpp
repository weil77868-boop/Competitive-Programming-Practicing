//b557.直角三角形
//Time Complexity : O(n^3) , 有待優化
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool check(int i, int j, int k) { return i * i + j * j == k * k; }

int main() {
  int t;
  cin >> t;
  while (t--) {
    int cnt = 0, n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++) {
      for (int j = i + 1; j < n; j++) {
        for (int k = j + 1; k < n; k++) {
          cnt += check(a[i], a[j], a[k]);
        }
      }
    }
    cout << cnt << '\n';
  }
}
