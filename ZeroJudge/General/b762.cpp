/*
 * Problem : ZeroJudge b762.英國聯蒙
 * Date : 2026/10
 * Tag : State Machine
 */
#include <iostream>
#include <string>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin >> n;
  int k = 0, d = 0, a = 0, combo = 0;
  while (n--) {
    string s;
    cin >> s;
    if (s == "Get_Kill") {
      k++;
      combo++;
      if (combo < 3)
        cout << "You have slain an enemie." << '\n';
      else if (combo == 3)
        cout << "KILLING SPREE!" << '\n';
      else if (combo == 4)
        cout << "RAMPAGE~" << '\n';
      else if (combo == 5)
        cout << "UNSTOPPABLE!" << '\n';
      else if (combo == 6)
        cout << "DOMINATING!" << '\n';
      else if (combo == 7)
        cout << "GUALIKE!" << '\n';
      else
        cout << "LEGENDARY!" << '\n';
    } else if (s == "Get_Assist") {
      a++;
    } else if (s == "Die" && combo < 3) {
      cout << "You have been slained." << '\n';
      d++;
      combo = 0;
    } else {
      cout << "SHUTDOWN." << '\n';
      d++;
      combo = 0;
    }
  }
  cout << k << '/' << d << '/' << a << '\n';
  return 0;
}
