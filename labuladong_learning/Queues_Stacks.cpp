
// 队列的基本API

template <typename E>

class MyQueue{
public:
    // 向队尾插入元素，时间复杂度O(1)
    void push(const E& e);
    // 从队头删除元素，时间复杂度O(1)
    E pop();

    // 查看队头元素， 时间复杂度O(1)
    E peek() const;
    // 返回队列中的元素个数，时间复杂度o(1)
    int size() const;
};


// 用链表作为底层数据结构实现栈
#include <list>
#include <iostream>

template <typename E>

class MyLinkedStack{
private:
    std::list<E> list;

public:
    // 向栈顶插入元素，时间复杂度O(1)
    void push(const E &e)
    {
        list.push_back(e);
    }

    // 从栈顶弹出元素，时间复杂度O(1)

    E pop()
    {
        E value = list.back();
        list.pop_back();
        return value;
    }

    // 查看栈顶元素， 时间复杂度O(1)
    E peek() const
    {
        return list.back();
    }

    // 返回栈中的元素个数，时间复杂度O(1)
    int size() const
    {
        return list.size();
    }
};


//int main()
//{
//
//    MyLinkedStack<int> stack;
//
//    stack.push(1);
//    stack.push(2);
//    stack.push(3);
//    stack.push(4);
//
//    while (stack.size() > 0)
//    {
//        std::cout << stack.pop() << std::endl;
//    }
//
//    return 0;
//}

// 用链表作为底层数据结构实现队列

#include <list>
#include <iostream>

template<typename E>

class MyLinkedQueue{
private:std::list<E> list;

public:
    // 向队尾插入元素，时间复杂度O(1）
    void push(const E &e)
    {
        list.push_back(e);
    }

    // 从队头删除元素，时间复杂度O(1)
    E pop()
    {
        E front = list.front();
        list.pop_front();
        return front;
    }

    // 查看队头元素，时间复杂度O(1)
    E peek() {
        return list.front();
    }

    int size()
    {
        return list.size();
    }
};


//int main()
//{
//    MyLinkedQueue<int> queue;
//    queue.push(1);
//    queue.push(2);
//    queue.push(3);_
//
//    std::cout<<queue.peek()<<std::endl;
//    std::cout<<queue.pop()<<std::endl;
//    std::cout<<queue.pop()<<std::endl;
//    std::cout<<queue.peek()<<std::endl;
//}

// 用数组最为底层数据结构实现栈
#include <vector>

template <typename E>

class MyArrayStack{
private:
    std::vector<E> list;

public:
    // 向栈顶加入元素，时间复杂度O(1)
    void push(const E &e)
    {
        list.push_back(e);
    }

    // 从栈顶弹出元素，时间复杂度O(1)
    E pop()
    {
        E topElement = list.back();
        list.pop_back();
        return topElement;
    }

    // 查看栈顶元素，时间复杂度O(1)
    E peek() const{
        return list.back();
    }

    // 返回栈中的元素个数， 时间复杂度O(1)
    int size() const{
        return list.size();
    }
};

#include <iostream>
#include <deque>


template <typename E>

class MyArrayQueue{
private:
};

template <typename E>

class MyListDeque{
    std::list<E> list;


public:
    // 从队头插入元素，时间复杂度O(1)
};