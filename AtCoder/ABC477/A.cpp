/*
 * Problem : AtCoder ABC A. Traffic Light
 * Date : 2026/10
 * Tag : String, Functions
 * 解題思路 :
 * 將字串設為 "BYR" 並自我串接成 "BYRBYR"，
 * 藉此處理環狀序列的查找，尋找輸入字元並輸出其後一個字元。
 */
#include <iostream>
#include <string>

using namespace std;

int main() {
  string s = "BYR";
  s += s;
  char c;
  cin >> c;
  for (int i = 0; i < 3; i++) {
    if (s[i] == c) {
      cout << s[i + 1] << '\n';
      break;
    }
  }
  return 0;
}
