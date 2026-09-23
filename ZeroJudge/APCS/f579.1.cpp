//2020/7-1
#include <iostream>
using namespace std;

int main() {
  int a, b, x, ans = 0;
  cin >> a >> b >> x;
  for (int i = 0; i < x; i++) {
    int cnt_a = 0, cnt_b = 0;
    int item;
    while (cin >> item && item != 0) {
        if(item == a) cnt_a++;
        else if(item == -a) cnt_a--;
        else if(item == b) cnt_b++;
        else if(item == -b) cnt_b--;
    }
    if(cnt_a >= 1 && cnt_b >= 1) ans++;
  }
  cout<<ans<<'\n';
  return 0;
}
