/*
 * Problem : LeetCode 1768. Merge Strings Alternately
 * Date : 2026/10
 * Tag : String, Simulation, Two Pointers
 * 解題思路 :
 * 使用雙指標（i 和 j）分別走訪兩個字串，透過 while 迴圈交替將字元串接到結果字串中，
 * 若其中一個字串較長，則在另一方走訪完畢後繼續追加剩餘字元，直到雙方皆走訪完畢。
 */

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int len1 = word1.size(), len2 = word2.size();
        string ans;
        int i = 0, j = 0;
        while(i < len1 || j < len2){
            if(i < len1) ans += word1[i];
            if(j < len2) ans += word2[j];
            i++, j++;
        }
        return ans;
    }
};

// ==================== 本地測試區 (Local Test Driver) ====================
int main() {
    Solution sol;
    string word1, word2;
    while (cin >> word1 >> word2) {
        cout << sol.mergeAlternately(word1, word2) << '\n';
    }
    return 0;
}
