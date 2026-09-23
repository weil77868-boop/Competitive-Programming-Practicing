#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  cin >> s;
  for (int i = 0; i < (int)s.size(); i++) {
    s[i] = char(s[i] - 7);
    cout << s[i];
  }
  cout << '\n';
  return 0;
}
