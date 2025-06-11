

struct ListNode
{
    int val;
    ListNode* next;


    // 构造函数
    ListNode() : val(0) , next(nullptr){}
    ListNode(int x) : val(x) , next(nullptr){}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution{
public:
    ListNode* partition(ListNode* head, int x)
    {
        // 存放小于x的链表的虚拟头节点
        ListNode* dummy1 = new ListNode(-1);
        ListNode* dummy2 = new ListNode(-1);

        ListNode* p1 = dummy1;
        ListNode* p2 = dummy2;

        ListNode* p = head;

        while (p != nullptr)
        {
            if(p->val >= x)
            {
                p2->next = p;
                p2 = p2->next;
            }
            else
            {
                p1->next = p;
                p1 = p1->next;
            }

            ListNode* tmp = p.next;
            p->next = nullptr;
            p = tmp;

        }
        p1->next = dummy2->next;

        return  dummy1->next;

    }
};