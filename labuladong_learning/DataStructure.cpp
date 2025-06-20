#include <cstring>
#include <iostream>
#include <vector>
using namespace std;
void my_print(int *arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << arr[i]<<"\t";

    }
    cout<<endl;

}
//int main()
//{
////    int a[10];
////    memset(a, 0, sizeof(a));
////
////    cout << a[0] << endl;
////    a[0] = 122;
////    cout << a[0] << endl;
//
//    int a[10];
//    memset(a, 2, sizeof(a));
//
//    int i = 0;
//    for (i = 0; i < 4; i++)
//    {
//        a[i] = i;
//    }
//
//
//    for (i = 0; i< 10; i++)
//    {
//        cout<<a[i]<<endl;
//    }
//
//
//}

//
//void my_print(int *arr, int len)
//{
//    for (int i = 0; i < len; i++)
//    {
//        cout << arr[i]<<"\t";
//
//    }
//    cout<<endl;
//
//}
//
//
//int main()
//{
//
//    int arr[10];
//    memset(arr, 0, sizeof(arr));
//    my_print(arr, 10);
//
//    for (int i = 0; i < 4; i++)
//    {
//        arr[i] = i;
//    }
//
//    my_print(arr, 10);
//    for(int j = 4; j > 2; j--)
//    {
//        arr[j] = arr[j - 1];
//    }
//
//    arr[2] = 666;
//    my_print(arr, 10);
//
//    return 0;
//}


//int main()
//{
//    int arr[10];
//    for (int i = 0; i < 10; i++)
//    {
//        arr[i] = i;
//    }
//    my_print(arr, 10);
//
//    int newArr[20];
//    for (int i = 0; i< 10; i++)
//    {
//        newArr[i] = arr[i];
//    }
//    my_print(newArr, 20);
//    newArr[10] = 10;
//    my_print(newArr, 20);
//
//    return 0;
//}




//int main()
//{
//    int arr[10];
//    for(int i = 0; i < 10; i++)
//    {
//        arr[i] = i;
//    }
//
//    my_print(arr, 10);
//
//    for(int i = 0; i<4; i++)
//    {
//            arr[i] = arr[i + 1];
//    }
//}

//int main()
//{
//    int a = 0;
//    int b = 1;
//    cout<<a<<"\t"<<b<<endl;
//
//    a = a + b;
//    b = a - b;
//    a = a - b;
//    cout<<a<<"\t"<<b<<endl;
//
//    a = a ^ b;
//    b = a ^ b;
//    a = a ^ b;
//    cout<<a<<"\t"<<b<<endl;
//
//
//
//}



//struct student
//{
//    char name[10];
//    int score;
//};
//int main() {
//    vector<int> arr;
//
//
//    for (int i = 0; i < 10; i++) {
//        arr.push_back(i);
//    }
//
//    my_print(&arr[0], arr.size());
//
//    arr.insert(arr.begin() + 2, 666);
//    my_print(&arr[0], arr.size());
//
//    arr.insert(arr.begin(), -1);
//    my_print(&arr[0], arr.size());
//    arr.pop_back();
//    my_print(&arr[0], arr.size());
//    arr.erase(arr.begin() + 3);
//    my_print(&arr[0], arr.size());
//
//    struct student arr[5];
//    for (int i = 0; i < 5; i++)
//    {
//        arr[i].score = i;
//    }
//
//    int j = 0;
//    for (int i = 0; i < 5 - 1; i++){
//        for(j  = 0; j <5-1- i; j++)
//        {
//            if(arr[j].score > arr[j + 1].score)
//            {
//                struct student temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//            }
//        }
//    }
//
//
//
//    return 0;
//}
#include <iostream>
#include <stdexcept>
#include <vector>
template <typename E>
class MyArrayList
{
private:
    // 真正存储数据的底层数组
    E* data;
    // 记录当前元素个数
    int size;
    // 最大元素容量
    int cap;

    // 默认初始容量
    static const int INIT_CAP = 10;

public:
    MyArrayList()
    {
        this->data = new E[INIT_CAP];
        this->size = 0;
        this->cap = INIT_CAP;
    }
    MyArrayList(int initCapcity)
    {
        this->data = new E[initCapcity];
        this->size = 0;
        this->cap = initCapcity;

    }

    void addLast(E e)
    {
        if (size == cap)
        {
            resize(cap * 2);
        }
        data[size] = e;
        size++;
    }

    void add(int index, E e)
    {
        checkPositionIndex(index);

        if (size == cap)
        {
            resize(cap * 2);
        }

        for (int i = size - 1; i >= index; i--)
        {
            data[i+1] = data[i];
        }

        data[index] = e;
        size++;
    }

    void addFirst(E e)
    {
        add(0, e);
    }

    E removeLast()
    {
        if (size == 0)
        {
            throw std::out_of_range("NoSuchElementException");
        }

        if (size == cap / 4)
        {
            resize(cap / 2);
        }
        E deleteVal = data[size - 1];

        data[size - 1] = E();
        size--;



        return deleteVal;
    }

    E remove(int index)
    {
        checkElementIndex(index);

        if (size == cap / 4)
        {
            resize(cap / 2);
        }

        E deleteVal = data[index];

        for ( int i = index; i < size - 1; i++)
        {
            data[i - 1] = data[i];
        }

        data[size - 1] = E();
        size--;


        return deleteVal;
    }

    E removeFirst()
    {
        return remove(0);
    }

    E get(int index)
    {
        checkElementIndex(index);
        return data[index];
    }

    E set(int index, E element)
    {
        checkElementIndex(index);
        E oldVal = data[index];
        data[index] = element;
        return oldVal;
    }


    int getSize()
    {
        return size;
    }

    bool isEmpty()
    {
        return size == 0;
    }

    void resize(int newCap)
    {
        E* temp = new E[newCap];
        for (int i = 0; i < size; i++)
        {
            temp[i] = data[i];
        }

        delete[] data;

        data = temp;
        cap = newCap;
    }
    bool isElementIndex(int index)
    {
        return index >= 0 && index < size;
    }

    bool isPositionIndex(int index)
    {
        return index >= 0 && index <= size;
    }

    void checkElementIndex(int index)
    {
        if (!isElementIndex(index))
        {
            throw std::out_of_range("Index out of bounds");
        }
    }

    void checkPositionIndex(int index)
    {
        if (!isPositionIndex(index))
        {
            throw std::out_of_range("Index out of bounds");
        }
    }

    void display()
    {
        std::cout<<"size: "<<size<<" cap: "<<cap<<std::endl;
        for (int i = 0; i < size; i++)
        {
            std::cout<<data[i]<<" ";
        }
        std::cout<<std::endl;
    }

    ~MyArrayList()
    {
        delete[] data;
    }


};
//int main()
//{
//    MyArrayList<int> arr(3);
//
//    for (int i = 1; i <= 5; i++)
//    {
//        arr.addLast(i);
//    }
//
//    arr.remove(3);
//    arr.add(1, 9);
//    arr.addFirst(100);
//    int val = arr.removeLast();
//
//    for (int i = 0; i < arr.getSize();i++)
//    {
//        std::cout<<arr.get(i)<<" ";
//    }
//}
class ListNode {
public:
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

// 输入一个数组，转换为一条单链表
//ListNode* createLinkedList(std::vector<int> arr) {
//    if (arr.empty()) {
//        return nullptr;
//    }
//    ListNode* head = new ListNode(arr[0]);
//    ListNode* cur = head;
//    for (int i = 1; i < arr.size(); i++) {
//        cur->next = new ListNode(arr[i]);
//        cur = cur->next;
//    }
//    return head;
//}

ListNode* createLinkedList(std::vector<int> arr)
{
    if (arr.empty())
    {
        return nullptr;
    }
    ListNode* head = new ListNode(arr[0]);
    ListNode* cur = head;
    for (int i = 1; i< arr.size(); i++)
    {
        cur->next = new ListNode(arr[i]);
        cur = cur->next;
    }

    return head;
}
//int main()
//{
//
//    ListNode* head = createLinkedList({1, 2, 3, 4, 5});
//
//    for(ListNode* p = head; p != nullptr; p = p->next)
//    {
//        std::cout<<p->val<<std::endl;
//    }
//
//    return 0;
//}


//int main()
//{
////    // 创建一个链表
////    ListNode* head = createLinkedList({1, 2, 3, 4, 5});
////
////    // 在单链表头部插入一个新节点0
////    ListNode* newNode = new ListNode(0);
////    newNode->next = head;
////
////    ListNode* p = newNode;
////    while (p->next != nullptr)
////    {
////        std::cout<<p->val;
////        p = p->next;
////    }
////    ListNode* a_p = new ListNode(6);
////    p->next = a_p;
////
////
//
//
//}

//int main()
//{
//
//    ListNode* head = createLinkedList({1,2,3, 4,5, 6});
//
//    // 在第三个节点后面插入一个新节点66
//    // 现找到前驱节点，即第3个节点
//    ListNode* p = head;
//    for(int i = 0; i < 2; i++)
//    {
//        p = p->next;
//    }
//
//    // 此时p指向第3个节点
//    // 组装新节点的后驱节点
//    ListNode* newNode = new ListNode(66);
//    newNode->next = p->next;
//
//    // 插入新节点
//    p->next = newNode;
//}
//int main()
//{
//    // 创建一条单链表
//    ListNode* head = createLinkedList({1, 2, 3, 4, 5});
//    // 删除第4个节点，要操作前驱节点
//    ListNode* p = head;
//
//    for (int i = 0; i < 2; i++)
//    {
//        p = p->next;
//    }
//
//    p->next = p->next->next;
//
//
//
//
//}

//int main()
//{
//    ListNode* head = createLinkedList({1, 2, 3, 4, 5});
//    ListNode* p = head;
//    for (ListNode* p = head; p != nullptr; p = p->next)
//    {
//        std::cout<<p->val<<std::endl;
//    }
//    std::cout<<"------------------"<<std::endl;
//    while (p->next->next != nullptr)
//    {
//        p = p->next;
//    }
//    p->next = nullptr;
//
//    for (ListNode* p = head; p != nullptr; p = p->next)
//    {
//        std::cout<<p->val<<std::endl;
//    }
//}
//


class DoublyListNode {
public:
    int val;
    DoublyListNode *next, *prev;
    DoublyListNode(int x) : val(x), next(NULL), prev(NULL) {}
};

DoublyListNode* createDoublyLinkedList(vector<int> arr) {
    if (arr.empty()) {
        return NULL;
    }
    DoublyListNode* head = new DoublyListNode(arr[0]);
    DoublyListNode* cur = head;
    // for 循环迭代创建双链表
    for (int i = 1; i < arr.size(); i++) {
        DoublyListNode* newNode = new DoublyListNode(arr[i]);
        cur->next = newNode;
        newNode->prev = cur;
        cur = cur->next;
    }
    return head;
}

//int main()
//{
//
//    // 创建一条双链表
//    DoublyListNode* head = createDoublyLinkedList({1, 2, 3, 4, 5});
//
//    DoublyListNode* tail = nullptr;
//
//    // 头结点向后遍历双链表
//    for (DoublyListNode* p = head; p != nullptr; p = p->next)
//    {
//        cout<<p->val<<" ";
//        tail = p;
//    }
//
//    // 尾结点向前遍历双链表
//    for (DoublyListNode* p = tail; p != nullptr; p = p->prev)
//    {
//        cout<<p->val<<" ";
//
//    }
//
//}

//int main()
//{
//    DoublyListNode* head = createDoublyLinkedList({1, 2, 3, 4, 5});
//
//    for (DoublyListNode* p = head; p != nullptr; p = p->next)
//    {
//        cout<<p->val<<" ";
//    }
//    cout<<endl;
//    // 在双链表头部插入新节点0
//    DoublyListNode* newNode = new DoublyListNode(0);
//    newNode->next = head;
//    head->prev = newNode;
//    head = newNode;
//
//
//    for (DoublyListNode* p = head; p != nullptr; p = p->next)
//    {
//        cout<<p->val<<" ";
//    }
//}


//int main()
//{
//    DoublyListNode* head = createDoublyLinkedList({1, 2, 3, 4, 5});
//    DoublyListNode* tail = head;
//    // 先走到链表的最后一个节点
//    for (DoublyListNode* p = head; p != nullptr; p = p->next)
//    {
//        cout<<p->val<<" ";
//    }
//
//    while (tail->next != nullptr)
//    {
//        tail = tail->next;
//    }
//
//    // 在双链表尾部插入新节点6
//    DoublyListNode* newNode = new DoublyListNode(6);
//    tail->next = newNode;
//    newNode->prev = tail;
//    // 更新成功
//    tail = newNode;
//
//    for (DoublyListNode* p = head; p != nullptr; p = p->next)
//    {
//        cout<<p->val<<" ";
//    }
//}

//int main()
//{
//    DoublyListNode* head = createDoublyLinkedList({1, 2, 3 , 4, 5});
//    DoublyListNode* p = head;
//    for (int i = 0; i < 2; i++)
//    {
//        p = p->next;
//    }
//
//    // 组装节点
//    DoublyListNode* newNode = new DoublyListNode(66);
//    newNode->next = p->next;
//    newNode->prev = p;
//
//    p->next->prev = newNode;
//    p->next = newNode;
//
//    for (DoublyListNode* p = head; p != nullptr; p = p->next)
//    {
//        cout<<p->val<<" ";
//    }
//}

//int main()
//{
//    DoublyListNode* head = createDoublyLinkedList({1, 2, 3, 4, 5});
//
//    for (DoublyListNode* p = head; p != nullptr; p = p->next)
//    {
//        cout<<p->val<<" ";
//    }
//    // 删除第3个节点
//    // 先找到第4个节点
//    DoublyListNode* p = head;
//    for (int i = 0; i < 2; i++)
//    {
//        p = p->next;
//    }
//
//    // 现在p指向的第3个节点，我们将它后面的那个节点摘除出去
//    DoublyListNode* toDelete = p->next;
//
//    // 把toDelete从链表中摘除
//    p->next = toDelete->next;
//    toDelete->next->prev = p;
//
//    toDelete->next = nullptr;
//    toDelete->prev = nullptr;
//
//    for (DoublyListNode* p = head; p != nullptr; p = p->next)
//    {
//        cout<<p->val<<" ";
//    }
//}

//
//int main()
//{
//
//    // 创建一条双链表
//    DoublyListNode* head = createDoublyLinkedList({1, 2, 3, 4, 5});
//    for(DoublyListNode* p = head; p != nullptr; p = p->next)
//    {
//        cout<<p->val<<" ";
//    }
//
//    // 删除尾结点
//    DoublyListNode* p = head;
//    // 找到尾结点
//    while (p->next != nullptr)
//    {
//        p = p->next;
//    }
//
//    // 现在p指向尾结点
//    // 把尾结点从链表中摘除
//    p->prev->next = nullptr;
//
//    // 把被删节点的指针都断开
//    p->prev = nullptr;
//
//    for(DoublyListNode* p = head; p != nullptr; p = p->next)
//    {
//        cout<<p->val<<" ";
//    }
//
//}

#include <iostream>
#include <stdexcept>


template<typename E>

class MyLinkedList
{
    // 虚拟头尾节点
    struct Node
    {
        E val;
        Node* next;
        Node* prev;

        Node(E value) : val(value), next(nullptr) , prev(nullptr) {}

    };

    Node* head;
    Node* tail;
    int size;


public:
    MyLinkedList()
    {
        head = new Node(E());
        tail = new Node(E());
        head->next = tail;
        tail->prev = head;
        size = 0;
    }

    ~MyLinkedList()
    {
        while (size > 0)
        {
            removeFirst();
        }
        delete head;
        delete tail;
    }

     // 增
     void addLast(E e)
     {
        Node* x = new Node(e);
        Node* temp = tail->prev;

        temp->next = x;
        x->prev = temp;

        x->next = tail;
        tail->prev = x;

        size++;
     }

     void addFirst(E e)
     {
        Node* x = new Node(e);
        Node* temp = head->next;

        temp->prev = x;
        x->next = temp;

        head->next = x;
        x->prev = head;
        size++;
     }

     void add(int index, E element)
     {
        checkPositionIndex(index);

        if (index == size)
        {
            addLast(element);
            return ;
        }

        // 找到index对应的node
        Node* p = getNode(index);
        Node* temp = p->prev;

        Node* x = new Node(element);

        p->prev = x;
        temp->next = x;

        x->prev = temp;
        x->next = p;

        size++;
     }

     // 删
     E removeFirst()
     {
        if (size < 1)
        {
            throw std::out_of_range("No elemets to remove");
        }
        // 虚拟节点的存在是我们不用考虑空指针的问题
        Node* x = head->next;
        Node* temp = x->next;

        head->next = temp;
        temp->prev = head;

        E val = x->val;
        delete x;

        size--;
        return val;
     }

     E removeLast()
     {
        if (size < 1)
        {
            throw std::out_of_range("No elements to remove");
        }
        Node* x = tail->prev;
        Node* temp = tail->prev->prev;

        tail->prev = temp;
        temp->next = tail;

        E val = x->val;
        x->next = nullptr;
        x->prev = nullptr;

        delete x;
        size--;

        return val;
     }

     E remove(int index)
     {
        checkElementIndex(index);
        // 找到index对应的node
        Node* x = getNode(index);
        Node* prev = x->prev;
        Node* next = x->next;

        prev->next = next;
        next->prev = prev;

        E val = x->val;
        x->prev = nullptr;
        x->next = nullptr;
        delete x;

        size--;

        return val;

     }

     E get(int index)
     {
        checkElementIndex(index);
        Node* p = getNode(index);

        return p->val;
     }

     E getFirst()
     {
        if (size < 1)
        {
            throw std::out_of_range("No elements in the list");
        }
        return head->next->val;
     }

     E getLast()
     {
        if (size < 1)
        {
            throw std::out_of_range("No elements in the list");
        }
        return tail->prev->val;
     }


     // 改

     E set(int index, E val)
     {
        checkElementIndex(index);

        Node* p = getNode(index);

        E oldVal = p->val;
        p->val = val;

        return oldVal;
     }

     int getSize()
     {
        return size;
     }

     bool isEmpty() const
     {
        return size == 0;
     }

     void display()
     {
        std::cout<<"size: = "<<size<<std::endl;
        for (Node* p = head->next; p != tail; p = p->next)
        {
            std::cout<<p->val<<"<->";

        }

        std::cout<<"nullptr"<<std::endl;
        std::cout<<std::endl;
     }
private:
    Node* getNode(int index)
    {
        checkElementIndex(index);
        Node* p = head->next;

        for(int i = 0; i < index; i++)
        {
            p = p->next;
        }

        return p;
    }

    bool isElementIndex(int index) const
    {
        return index >= 0 && index < size;
    }

    bool isPositionIndex(int index) const
    {
        return index >= 0 && index <= size;
    }

    void checkElementIndex(int index)
    {
        if (!isElementIndex(index))
        {
            throw std::out_of_range("Index:"+std::to_string(index)+", size:"+std::to_string(size));
        }
    }

    void checkPositionIndex(int index) const{
        if(!isPositionIndex(index))
            throw std::out_of_range("index:"+std::to_string(index)+", size:" + std::to_string(size));
    }
};

//int main()
//{
//    MyLinkedList<int> list;
//    list.addLast(1);
//    list.addLast(2);
//    list.addLast(3);
//    list.addFirst(0);
//    list.add(2, 100);
//
//    list.display();
//
//    return 0;
//}

#include <iostream>
#include <stdexcept>

template <typename E>
class MyLinkedList2
{
private:
    // 节点结构
    struct Node
    {
        E val;
        Node* next;

        Node(E value) : val(value), next(nullptr) {}
    };

    Node* head;
    // 实际的尾部节点引用
    Node* tail;
    int size_;

public:
    MyLinkedList2()
    {
        head = new Node(E());
        tail = head;
        size_ = 0;
    }
    ~MyLinkedList2()
    {
        Node* current = head;
        while (current != nullptr)
        {
            Node* next = current->next;
            delete current;
            current = next;
        }
    }

    void addFirst(E e)
    {
        Node* newNode = new Node(e);
        newNode->next = head->next;
        head->next = newNode;
        if (size_ == 0)
        {
            tail = newNode;
        }
        size_++;
    }

    void addLast(E e)
    {
        Node* newNode = new Node(e);
        tail->next = newNode;
        tail = newNode;
        size_++;
    }

    void add(int index, E element)
    {
        checkPositionIndex(index);

        if(index == size_)
        {
            addLast(element);
            return ;
        }
        Node* prev = head;
        for (int i = 0; i < index; i++)
        {
            prev = prev->next;
        }
        Node* newNode = new Node(element);
        newNode->next = prev->next;
        prev->next = newNode;
        size_++;
    }

    E removeFirst()
    {
        if (isEmpty())
        {
            throw std::out_of_range("No elements to remove");
        }
        Node* first = head->next;
        head->next = first->next;

        if (size_ == 1)
        {
            tail = head;
        }

        size_--;
        E val = first->val;
        delete first;
        return val;
    }

    E removeLast()
    {
        if (isEmpty())
        {
            throw std::out_of_range("No elements to remove");
        }

        Node* prev = head;

        while(prev->next != tail){
            prev = prev->next;
        }
        E val = tail->val;
        delete tail;
        prev->next = nullptr;
        tail = prev;
        size_--;
        return val;
    }

    E remove(int index)
    {
        checkElementIndex(index);

        Node* prev = head;
        for(int i = 0; i < index; i++)
        {
            prev = prev->next;
        }

        Node* nodeToRemove = prev->next;
        prev->next = nodeToRemove->next;

        prev->next = nodeToRemove->next;

        if (index = size_ - 1)
        {
            tail = prev;
        }

        size_--;

        E val = nodeToRemove->val;
        delete nodeToRemove;
        return val;
    }


    E getFirst()
    {
        if (isEmpty())
        {
            throw std::out_of_range("No elements in the list");
        }
        return head->next->val;
    }

    E getLast()
    {
        if (isEmpty())
        {
            throw std::out_of_range("No elements in the last");
        }

        return tail->val;
    }


    E get(int index)
    {
        checkElementIndex(index);
        Node* p = getNode(index);
        return p->val;
    }

    E set(int index, E element)
    {
        checkElementIndex(index);
        Node* p = getNode(index);

        E oldVal = p->val;
        p->val = element;

        return oldVal;
    }

    int size()
    {
        return size_;
    }

    bool isEmpty() {
        return size_ == 0;
    }


private:
    bool isElementIndex(int index){
        return index >= 0 && index < size_;
    }

    bool isPositionIndex(int index)
    {
        return index >= 0 && index <= size_;
    }

    void checkElementIndex(int index)
    {
        if (!isElementIndex(index))
        {
            throw std::out_of_range("Index:"+std::to_string(index) + ", size_:"+std::to_string(size_));
        }
    }

    void checkPositionIndex(int index)
    {
        if (!isPositionIndex(index))
        {
            throw std::out_of_range("Index: " + std::to_string(index) + ", size_:" + std::to_string(size_));
        }
    }

    Node* getNode(int index)
    {
        Node* p = head->next;
        for (int i = 0; i < index; i++)
        {
            p = p->next;
        }

        return p;
    }


};

//int main()
//{
//
//    MyLinkedList2<int> list;
//    list.addFirst(1);
//    list.addFirst(2);
//    list.addLast(3);
//    list.addLast(4);
//    list.add(2, 5);
//
//    std::cout<< list.removeFirst()<<std::endl;
//    std::cout<< list.removeLast() << std::endl;
//
//    std::cout<<list.remove(1)<<std::endl;
//
//    std::cout<<list.getFirst() <<std::endl;
//
//    std::cout<<list.getLast() <<std::endl;
//    std::cout<<list.get(1)<<std::endl;
//}