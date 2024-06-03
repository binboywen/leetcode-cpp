#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        if (grid.size() == 0 || grid[0].size() == 0) {
            return 0;
        }
        int rows = grid.size(), columns = grid[0].size();
        auto dp = vector < vector <int> > (rows, vector <int> (columns));
        dp[0][0] = grid[0][0];
        for (int i = 1; i < rows; i++) {
            dp[i][0] = dp[i - 1][0] + grid[i][0];
        }
        for (int j = 1; j < columns; j++) {
            dp[0][j] = dp[0][j - 1] + grid[0][j];
        }
        for (int i = 1; i < rows; i++) {
            for (int j = 1; j < columns; j++) {
                dp[i][j] = min(dp[i - 1][j], dp[i][j - 1]) + grid[i][j];
            }
        }
        return dp[rows - 1][columns - 1];
    }
};

//leetcode submit region end(Prohibit modification and deletion)

vector<int> sortedSquares(vector<int>& nums) {
    int left = 0;
    int right = nums.size() - 1;
    while (left < right) {
        int leftPow = pow(nums[left], 2);
        int rightPow = pow(nums[right], 2);
        if (leftPow > rightPow) {
            nums[left] = nums[right];
            nums[right] = leftPow;
            right--;
        } else {
            nums[right] = rightPow;
            right--;
        }
    }
    return nums;
}

int main()
{
//    Solution s;
//    vector<int> data{7, 1, 5, 3, 6, 4};
//    //vector<int> ans = s.twoSum(data,11);
//    //cout << ans[0]<<ans[1]<<endl;
//
//    int m,n;
//    cin >> m;
//    cin >> n;
//    vector<vector<int>> arr(m, vector<int>(n));
//    for (int i = 0; i < m; i++) {
//        for (int j = 0; j < n; j++) {
//            cin >> arr[i][j];
//        }
//    }
//    cout << s.minPathSum(arr);
    string ssss = "abbcd";
    cout << ssss.substr(0, 0) << endl;
    cout << ssss.find("b") << endl;
    cout<<"Hello LeetCode"<<endl;
    vector<int> nums = {-4,-1,0,3,10};
    vector<int> res = sortedSquares(nums);
    for (auto i : res) {
        cout << i << endl;
    }
}
