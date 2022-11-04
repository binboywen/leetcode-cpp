//请实现一个函数，把字符串 s 中的每个空格替换成"%20"。 
//
// 
//
// 示例 1： 
//
// 输入：s = "We are happy."
//输出："We%20are%20happy." 
//
// 
//
// 限制： 
//
// 0 <= s 的长度 <= 10000 
//
// Related Topics 字符串 👍 345 👎 0


#include "include/headers.h"

using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    string replaceSpace(string s) {
        int size = s.size();
        for (int i = 0; i < size; i++) {
            if (s[i] == ' ') {
                s.append("  ");
            }
        }
        int size2 = s.size() - 1;
        for (int i = size - 1; i >= 0; i--) {
            if (s[i] != ' ') {
                s[size2--] = s[i];
            } else {
                s[size2--] = '0';
                s[size2--] = '2';
                s[size2--] = '%';
            }
        }
        return s;
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