//在数组中的两个数字，如果前面一个数字大于后面的数字，则这两个数字组成一个逆序对。输入一个数组，求出这个数组中的逆序对的总数。 
//
// 
//
// 示例 1: 
//
// 输入: [7,5,6,4]
//输出: 5 
//
// 
//
// 限制： 
//
// 0 <= 数组长度 <= 50000 
//
// Related Topics 树状数组 线段树 数组 二分查找 分治 有序集合 归并排序 👍 845 👎 0


#include "include/headers.h"

using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class Solution {

public:
    int ret = 0;
    int reversePairs(vector<int>& nums) {
        mergeSort(nums, 0, nums.size() - 1);
        return ret;
    }
    void mergeSort(vector<int> &nums, int l, int r) {
        if (l >= r) {
            return;
        }
        int mid = (l + r) / 2;
        mergeSort(nums, l, mid);
        mergeSort(nums, mid + 1, r);
        merge(nums, l, mid, r);

    }
    void merge(vector<int> &nums, int l, int mid, int r)
    {
        int help[r - l + 1];
        int i = 0;
        int p1 = l;
        int p2 = mid + 1;
        while (p1 <= mid && p2 <= r) {
            if (nums[p1] <= nums[p2]) {
                help[i++] = nums[p1++];
            } else {
                help[i++] = nums[p2++];
                ret = (ret + mid - p1 + 1);
            }
        }
        while (p1 <= mid) {
            help[i++] = nums[p1++];
        }
        while (p2 <= r) {
            help[i++] = nums[p2++];
        }
        for (i = 0; i < (r - l + 1); i++) {
            nums[l + i] = help[i];
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