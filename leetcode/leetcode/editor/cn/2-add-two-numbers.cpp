//给你两个 非空 的链表，表示两个非负的整数。它们每位数字都是按照 逆序 的方式存储的，并且每个节点只能存储 一位 数字。 
//
// 请你将两个数相加，并以相同形式返回一个表示和的链表。 
//
// 你可以假设除了数字 0 之外，这两个数都不会以 0 开头。 
//
// 
//
// 示例 1： 
// 
// 
//输入：l1 = [2,4,3], l2 = [5,6,4]
//输出：[7,0,8]
//解释：342 + 465 = 807.
// 
//
// 示例 2： 
//
// 
//输入：l1 = [0], l2 = [0]
//输出：[0]
// 
//
// 示例 3： 
//
// 
//输入：l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
//输出：[8,9,9,9,0,0,0,1]
// 
//
// 
//
// 提示： 
//
// 
// 每个链表中的节点数在范围 [1, 100] 内 
// 0 <= Node.val <= 9 
// 题目数据保证列表表示的数字不含前导零 
// 
//
// Related Topics 递归 链表 数学 👍 8589 👎 0


#include "include/headers.h"
#include "include/listnode.h"
using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *result = new ListNode(0);
        int carry = 0;
        ListNode *p = l1;
        ListNode *q = l2;
        ListNode *cur = result;
        while (p != nullptr || q != nullptr) {
            int x = (p == nullptr) ? 0 : p->val;
            int y = (q == nullptr) ? 0 : q->val;
            int sum = carry + x + y;
            carry = sum / 10;
            cur->next = new ListNode(sum % 10);
            cur = cur->next;
            if (p != nullptr) {
                p = p->next;
            }
            if (q != nullptr) {
                q = q->next;
            }
        }

        if (carry != 0) {
            cur->next = new ListNode(carry);
        }
        return result->next;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
using namespace LeetCode;

int main()
{
    Solution s;
    vector<int> data{7, 1, 5, 3, 6, 4};
    ListNode *a = new ListNode(2);
    ListNode *b = new ListNode(4);
    ListNode *c = new ListNode(3);
    ListNode *d = new ListNode(5);
    ListNode *e = new ListNode(6);
    ListNode *f = new ListNode(4);
    a->next = b;
    b->next = c;
    d->next = e;
    e->next = f;
    ListNode *ret = s.addTwoNumbers(a,d);
    print_list(ret);
//    bb.head = ret;
//    bb.print();
//    //vector<int> ans = s.twoSum(data,11);
//    //cout << ans[0]<<ans[1]<<endl;
    cout<<"Hello LeetCode"<<endl;
}