//给你一个链表数组，每个链表都已经按升序排列。 
//
// 请你将所有链表合并到一个升序链表中，返回合并后的链表。 
//
// 
//
// 示例 1： 
//
// 输入：lists = [[1,4,5],[1,3,4],[2,6]]
//输出：[1,1,2,3,4,4,5,6]
//解释：链表数组如下：
//[
//  1->4->5,
//  1->3->4,
//  2->6
//]
//将它们合并到一个有序链表中得到。
//1->1->2->3->4->4->5->6
// 
//
// 示例 2： 
//
// 输入：lists = []
//输出：[]
// 
//
// 示例 3： 
//
// 输入：lists = [[]]
//输出：[]
// 
//
// 
//
// 提示： 
//
// 
// k == lists.length 
// 0 <= k <= 10^4 
// 0 <= lists[i].length <= 500 
// -10^4 <= lists[i][j] <= 10^4 
// lists[i] 按 升序 排列 
// lists[i].length 的总和不超过 10^4 
// 
//
// Related Topics 链表 分治 堆（优先队列） 归并排序 👍 2165 👎 0


#include "include/headers.h"

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
    struct Status {
        int val;
        ListNode *ptr;
        // //优先队列的队首元素优先级最高
        //		//结果为true时：    rhs.val的优先级高
        //		//结果为false时：   val的优先级高
        bool operator < (Status rhs) const {
            return val > rhs.val;
        }
    };

    priority_queue <Status> q;
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        for (auto node: lists) {
            if (node != nullptr) {
                q.push({node->val, node});
            }
        }
        ListNode *head = new ListNode(-1);
        ListNode *tail = head;
        while (!q.empty()) {
            auto f = q.top();
            q.pop();
            tail->next = f.ptr;
            tail = tail->next;
            if (f.ptr->next != nullptr) {
                q.push({f.ptr->next->val, f.ptr->next});
            }
        }
        return head->next;
    }

    ListNode* mergeKLists2(vector<ListNode*>& lists) {
        if (lists.size() < 1) {
            return nullptr;
        }
        for (int i = 1; i < lists.size(); i++) {
            lists[0] = mergeTwoLists(lists[0], lists[i]);
        }
        return lists[0];
    }

    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *ret = new ListNode(-1);
        ListNode *temp = ret;
        ListNode *p = list1;
        ListNode *q = list2;
        while (p != nullptr && q != nullptr) {
            if (p->val < q->val) {
                temp->next = p;
                p = p->next;
            } else {
                temp->next = q;
                q = q->next;
            }
            temp = temp->next;
        }
        if (p != nullptr) {
            temp->next = p;
        }
        if (q != nullptr) {
            temp->next = q;
        }
        return ret->next;

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