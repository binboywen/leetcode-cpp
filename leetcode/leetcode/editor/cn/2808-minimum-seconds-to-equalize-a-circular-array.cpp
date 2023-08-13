//给你一个下标从 0 开始长度为 n 的数组 nums 。 
//
// 每一秒，你可以对数组执行以下操作： 
//
// 
// 对于范围在 [0, n - 1] 内的每一个下标 i ，将 nums[i] 替换成 nums[i] ，nums[(i - 1 + n) % n] 或者 
//nums[(i + 1) % n] 三者之一。 
// 
//
// 注意，所有元素会被同时替换。 
//
// 请你返回将数组 nums 中所有元素变成相等元素所需要的 最少 秒数。 
//
// 
//
// 示例 1： 
//
// 输入：nums = [1,2,1,2]
//输出：1
//解释：我们可以在 1 秒内将数组变成相等元素：
//- 第 1 秒，将每个位置的元素分别变为 [nums[3],nums[1],nums[3],nums[3]] 。变化后，nums = [2,2,2,2] 。
//
//1 秒是将数组变成相等元素所需要的最少秒数。
// 
//
// 示例 2： 
//
// 输入：nums = [2,1,3,3,2]
//输出：2
//解释：我们可以在 2 秒内将数组变成相等元素：
//- 第 1 秒，将每个位置的元素分别变为 [nums[0],nums[2],nums[2],nums[2],nums[3]] 。变化后，nums = [2,
//3,3,3,3] 。
//- 第 2 秒，将每个位置的元素分别变为 [nums[1],nums[1],nums[2],nums[3],nums[4]] 。变化后，nums = [3,
//3,3,3,3] 。
//2 秒是将数组变成相等元素所需要的最少秒数。
// 
//
// 示例 3： 
//
// 输入：nums = [5,5,5,5]
//输出：0
//解释：不需要执行任何操作，因为一开始数组中的元素已经全部相等。
// 
//
// 
//
// 提示： 
//
// 
// 1 <= n == nums.length <= 10⁵ 
// 1 <= nums[i] <= 10⁹ 
// 
//
// Related Topics 贪心 数组 哈希表 👍 11 👎 0


#include "include/headers.h"
#include "algorithm"
#include "math.h"
#include <bits/stdc++.h>
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int minimumSeconds(vector<int>& nums) {
        // 用map记录每个数字的位置
        unordered_map<int , vector<int>> unorderMap;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            unorderMap[nums[i]].push_back(i);
        }
        int res = INT_MAX;
        // 循环遍历map
        // 把其他数字变成某个数字需要的次数(j - i) / 2
        // 需要将该数字首次出现处及其前面的数字移动到数组末尾
        for (auto &[key, value] : unorderMap) {
            int maxValue = -1;
            value.push_back(value[0] + n);
            for (int i = 0; i < value.size() - 1; i++) {
                int tmp = (value[i + 1] - value[i]) / 2;
                maxValue = max(maxValue, tmp);
            }
            res = min(res, maxValue);
        }
        return res;
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