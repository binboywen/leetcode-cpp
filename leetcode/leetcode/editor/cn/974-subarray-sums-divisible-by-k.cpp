//给定一个整数数组 nums 和一个整数 k ，返回其中元素之和可被 k 整除的（连续、非空） 子数组 的数目。 
//
// 子数组 是数组的 连续 部分。 
//
// 
//
// 示例 1： 
//
// 
//输入：nums = [4,5,0,-2,-3,1], k = 5
//输出：7
//解释：
//有 7 个子数组满足其元素之和可被 k = 5 整除：
//[4, 5, 0, -2, -3, 1], [5], [5, 0], [5, 0, -2, -3], [0], [0, -2, -3], [-2, -3]
// 
//
// 示例 2: 
//
// 
//输入: nums = [5], k = 9
//输出: 0
// 
//
// 
//
// 提示: 
//
// 
// 1 <= nums.length <= 3 * 10⁴ 
// -10⁴ <= nums[i] <= 10⁴ 
// 2 <= k <= 10⁴ 
// 
//
// Related Topics 数组 哈希表 前缀和 👍 384 👎 0


#include "include/headers.h"

using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int, int> record {{0, 1}};
        int sum = 0;
        int ans = 0;
        for (auto ele : nums) {
            sum += ele;
            int mod = (sum % k + k) % k; // C++对负数取模为负数
            if (record.count(mod)) {
                ans += record[mod];
            }
            ++record[mod];
        }
        return ans;
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