/*
 * Problem : ZeroJudge d066. 上學去吧！
 * Date : 2026/10
 * Tag : Simulation, Math
 * 解題思路 :
 * 將輸入的小時與分鐘統一換算為當天的總分鐘數，
 * 判斷是否落在 07:30 (450分) 到 17:00 (1020分) 的上學時間區間內，藉此輸出對應狀態。
 */
#include <iostream>
using namespace std;

int main() {
  int h, m;
  cin >> h >> m;
  cout << ((h * 60 + m >= 450 && h * 60 + m < 1020) ? "At School\n" : "Off School\n");
  return 0;
}
