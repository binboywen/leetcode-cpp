//输入一个链表的头节点，从尾到头反过来返回每个节点的值（用数组返回）。 
//
// 
//
// 示例 1： 
//
// 输入：head = [1,3,2]
//输出：[2,3,1] 
//
// 
//
// 限制： 
//
// 0 <= 链表长度 <= 10000 
//
// Related Topics 栈 递归 链表 双指针 👍 351 👎 0


#include "include/headers.h"

using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
    vector<int> result;
public:
    vector<int> reversePrint(ListNode* head) {

        // reversePrintReverse(head);
        // reversePrintRecu(head);
        reversePrintList(head);
        return result;
    }

    vector<int> reversePrintList(ListNode *head) {
        ListNode *newHead = new ListNode;
        ListNode *temp = head;
        while (temp != nullptr) {
            ListNode *p = newHead->next;
            ListNode *q = temp->next;
            newHead->next = temp;
            temp->next = p;
            temp = q;
        }
        temp = newHead->next;
        while (temp != nullptr) {
            result.push_back(temp->val);
            temp = temp->next;

        }
        return result;
    }

    void reversePrintRecu(ListNode* head) {

        if (head == nullptr) {
            return;
        }
        reversePrintRecu(head->next);
        result.push_back(head->val);
    }

    vector<int> reversePrintReverse(ListNode* head) {
        result.clear();
        ListNode *temp = head;
        while (temp != nullptr) {
            result.push_back(temp->val);
            temp = temp->next;
        }
        std::reverse(result.begin(), result.end());
        return result;
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