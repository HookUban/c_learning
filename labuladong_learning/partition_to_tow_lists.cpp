

#include <iostream>

struct ListNode{
    int val;            // 节点存储的值
    ListNode*  next;    // 指向下一个节点的指针

    // 构造函数（支持默认构造和值初始化）
    ListNode() : val(0) , next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr){}
    ListNode(int x, ListNode* next) : val(x), next(next) {}

};


void printList(ListNode* head)
{
    while (head)
    {
        std::cout << head->val << "->";
        head = head->next;
    }
    std::cout<<"nullptr"<<std::endl;
}


class Solution{
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2)
    {
        // 虚拟头结 点
        ListNode dummy(-1), *p = &dummy;
        ListNode *p1 = l1, *p2 = l2;

        while (p1 != nullptr && p2 != nullptr)
        {
            // 比较p1和p2两个指针
            // 将值较小的节点接到p指针
            if(p1->val > p2->val){
                p->next = p2;
                p2 = p2->next;
            }
            else
            {
                p->next = p1;
                p1 = p1->next;
            }
            p = p->next;
        }

        if (p1 != nullptr)
        {
            p->next = p1;
        }
        if (p2 != nullptr)
        {
            p->next = p2;
        }

        return dummy.next;
    }
};


class Solution_01{
public:
    ListNode* partition(ListNode* head, int x){
        // 存放小于x的链表的虚拟头结点
        ListNode* dummy1 = new ListNode(-1);
        // 存放大于等于x的链表的虚拟头结点
        ListNode* dummy2 = new ListNode(-1);
        // p1, p2指针负责生成结果链表
        ListNode* p1 = dummy1;
        ListNode* p2 = dummy2;
        // p负责遍历原链表，类似合并两个有序链表的逻辑
        // 这里是将一个链表分解成两个链表
        ListNode* p = head;

        while (p != nullptr)
        {

        }
    }
};

// 测试用例
//int main() {
//    // 构建链表 1: 1->3->5
//    ListNode* l1 = new ListNode(1);
//    l1->next = new ListNode(3);
//    l1->next->next = new ListNode(5);
//
//    // 构建链表 2: 2->4->6
//    ListNode* l2 = new ListNode(2);
//    l2->next = new ListNode(4);
//    l2->next->next = new ListNode(6);
//
//    std::cout << "List 1: ";
//    printList(l1);  // 输出: 1 -> 3 -> 5 -> nullptr
//
//    std::cout << "List 2: ";
//    printList(l2);  // 输出: 2 -> 4 -> 6 -> nullptr
//
//    // 合并链表
//    Solution p = Solution();
//    ListNode* merged = p.mergeTwoLists(l1, l2);
//    std::cout << "Merged List: ";
//    printList(merged);  // 输出: 1 -> 2 -> 3 -> 4 -> 5 -> 6 -> nullptr
//
//    // 内存清理（实际使用时建议封装链表类自动管理）
//    while (merged) {
//        ListNode* temp = merged;
//        merged = merged->next;
//        delete temp;
//    }
//
//    return 0;
//}