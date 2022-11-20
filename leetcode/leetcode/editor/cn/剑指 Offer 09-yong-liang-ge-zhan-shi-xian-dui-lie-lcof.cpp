//用两个栈实现一个队列。队列的声明如下，请实现它的两个函数 appendTail 和 deleteHead ，分别完成在队列尾部插入整数和在队列头部删除整数的
//功能。(若队列中没有元素，deleteHead 操作返回 -1 ) 
//
// 
//
// 示例 1： 
//
// 
//输入：
//["CQueue","appendTail","deleteHead","deleteHead","deleteHead"]
//[[],[3],[],[],[]]
//输出：[null,null,3,-1,-1]
// 
//
// 示例 2： 
//
// 
//输入：
//["CQueue","deleteHead","appendTail","appendTail","deleteHead","deleteHead"]
//[[],[],[5],[2],[],[]]
//输出：[null,-1,null,null,5,2]
// 
//
// 提示： 
//
// 
// 1 <= values <= 10000 
// 最多会对 appendTail、deleteHead 进行 10000 次调用 
// 
//
// Related Topics 栈 设计 队列 👍 629 👎 0


#include "include/headers.h"

using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class CQueue {
    stack<int> pushStack;
    stack<int> popStack;

public:
    CQueue() {

    }
    
    void appendTail(int value) {
        pushStack.push(value);
    }
    
    int deleteHead() {
        if (pushStack.empty() && popStack.empty()) {
            return -1;
        }
        if (popStack.empty()) {
            while (!pushStack.empty()) {
                int temp = pushStack.top();
                pushStack.pop();
                popStack.push(temp);
            }
        }
        int temp = popStack.top();
        popStack.pop();
        return temp;
    }
};

/**
 * Your CQueue object will be instantiated and called as such:
 * CQueue* obj = new CQueue();
 * obj->appendTail(value);
 * int param_2 = obj->deleteHead();
 */
//leetcode submit region end(Prohibit modification and deletion)


int main()
{
    CQueue s;
    vector<int> data{7, 1, 5, 3, 6, 4};
    //vector<int> ans = s.twoSum(data,11);
    //cout << ans[0]<<ans[1]<<endl;
    cout<<"Hello LeetCode"<<endl;
}