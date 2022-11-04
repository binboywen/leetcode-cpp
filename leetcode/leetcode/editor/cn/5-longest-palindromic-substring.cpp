//给你一个字符串 s，找到 s 中最长的回文子串。 
//
// 
//
// 示例 1： 
//
// 
//输入：s = "babad"
//输出："bab"
//解释："aba" 同样是符合题意的答案。
// 
//
// 示例 2： 
//
// 
//输入：s = "cbbd"
//输出："bb"
// 
//
// 
//
// 提示： 
//
// 
// 1 <= s.length <= 1000 
// s 仅由数字和英文字母组成 
// 
//
// Related Topics 字符串 动态规划 👍 5671 👎 0


#include "include/headers.h"

using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string longestPalindrome(string s) {
        int left = 0;
        int right = 0;
        int length = 0;
        for (int i = 0; i < s.size(); i++) {
            int length1 = longestPal(s, i, i);
            int length2 = longestPal(s, i, i + 1);
            int maxLen = max(length1, length2);
            if (maxLen > length) {
                length = maxLen;
                left = i - (maxLen - 1) / 2;
                right = i + maxLen / 2;
            }

        }
        return s.substr(left, right - left + 1);
    }

    int longestPal(string s, int leftIndex, int rightIndex) {
        while (leftIndex >= 0 && rightIndex < s.size() && s[leftIndex] == s[rightIndex]) {
            leftIndex--;
            rightIndex++;
        }
        return rightIndex - leftIndex + 1 - 2;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main()
{
    Solution s;
    vector<int> data{7, 1, 5, 3, 6, 4};
    string str{"bb"};
    auto ret = s.longestPalindrome(str);
    cout << ret << endl;
    //vector<int> ans = s.twoSum(data,11);
    //cout << ans[0]<<ans[1]<<endl;
    cout<<"Hello LeetCode"<<endl;
}