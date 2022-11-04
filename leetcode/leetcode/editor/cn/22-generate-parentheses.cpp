//数字 n 代表生成括号的对数，请你设计一个函数，用于能够生成所有可能的并且 有效的 括号组合。 
//
// 
//
// 示例 1： 
//
// 
//输入：n = 3
//输出：["((()))","(()())","(())()","()(())","()()()"]
// 
//
// 示例 2： 
//
// 
//输入：n = 1
//输出：["()"]
// 
//
// 
//
// 提示： 
//
// 
// 1 <= n <= 8 
// 
//
// Related Topics 字符串 动态规划 回溯 👍 2861 👎 0


#include "include/headers.h"

using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
    vector<string> res;
public:
    vector<string> generateParenthesis(int n) {
        backTrack(n, "", 0, 0);
        return res;
    }

    void backTrack(int n, string s,int left, int right) {
        if (s.size() == n * 2) {
            res.push_back(s);
            return;
        }
        if (left < n) {
            backTrack(n, s + "(", left + 1, right);
        }
        if (right < left) {
            backTrack(n, s + ")", left, right + 1);
        }

    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main()
{
    Solution s;
    vector<int> data{7, 1, 5, 3, 6, 4};
    //vector<int> ans = s.twoSum(data,11);
    //cout << ans[0]<<ans[1]<<endl;
    cout<<"Hello LeetCode"<<endl;
}