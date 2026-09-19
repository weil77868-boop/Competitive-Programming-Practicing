//2016/3_1
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> s(n);
  for (int i = 0; i < n; i++) cin >> s[i];

  sort(s.begin(), s.end());
  int max = 101;
  int min = -1;
  for (int i = 0; i < n; i++) {
    if (i) cout << ' ';
    cout << s[i];
    if (s[i] > min && s[i] < 60) min = s[i];
    if (s[i] < max && s[i] >= 60) max = s[i];
  }
  cout << endl;
  if (max != 101) {
    if (min != -1) {
      cout << min << '\n' << max << endl;
    } else {
      cout << "best case" << endl;
      cout << max << endl;
    }
  } else {
    cout << min << endl;
    cout << "worst case" << endl;
  }
  return 0;
}
