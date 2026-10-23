/*
 * Problem : AtCoder ABC A
 * Date : 2026/10
 * Tag : String, Functions
 * 解題思路 :
 * 檢查字串結尾是否為 'e'，若是則直接在尾端加上 'r'，否則加上 "er"。
 * 原本寫 s[(int)s.size() - 1] , 要記得有 s.back() 跟 s.front() 函式可以用
 */
#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  cin >> s;
  if (s.back() == 'e')
    cout << s + 'r' << '\n';
  else
    cout << s + "er" << '\n';

  return 0;
}
