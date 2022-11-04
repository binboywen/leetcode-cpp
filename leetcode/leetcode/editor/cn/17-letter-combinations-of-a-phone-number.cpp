//给定一个仅包含数字 2-9 的字符串，返回所有它能表示的字母组合。答案可以按 任意顺序 返回。 
//
// 给出数字到字母的映射如下（与电话按键相同）。注意 1 不对应任何字母。 
//
// 
//
// 
//
// 示例 1： 
//
// 
//输入：digits = "23"
//输出：["ad","ae","af","bd","be","bf","cd","ce","cf"]
// 
//
// 示例 2： 
//
// 
//输入：digits = ""
//输出：[]
// 
//
// 示例 3： 
//
// 
//输入：digits = "2"
//输出：["a","b","c"]
// 
//
// 
//
// 提示： 
//
// 
// 0 <= digits.length <= 4 
// digits[i] 是范围 ['2', '9'] 的一个数字。 
// 
//
// Related Topics 哈希表 字符串 回溯 👍 2099 👎 0


#include "include/headers.h"

using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
private:
    vector<vector<string>> table = {{""},{""},{"a","b","c"},
                                    {"d","e","f"}, {"g","h","i"},
                                    {"j","k","l"}, {"m","n","o"},
                                    {"p","q","r","s"},{"t","u","v"},
                                    {"w","x","y","z"}};
    vector<string> result;
    string temp;
public:
    vector<string> letterCombinations(string digits) {
        if (digits.size() < 1) {
            return {};
        }
        backTrack(digits ,0);
        return result;
    }

    void backTrack(string digits, int index) {
        if (index == digits.size()) {
            result.push_back(temp);
            return;
        }
        for (int i = 0; i < table[digits[index] - '0'].size(); i++) {
            temp.append(table[digits[index] - '0'][i]);
            backTrack(digits, index + 1);
            temp.pop_back();
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