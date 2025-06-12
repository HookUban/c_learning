
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

class ListNode
{
public:
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL){}
};


// 输入一个数组，转换为一条单链表

ListNode* createLinkedList(std::vector<int> arr)
{
    if (arr.empty())
    {
        return nullptr;
    }

    ListNode* head = new ListNode(arr[0]);
    ListNode* cur = head;

    for(int i = 1; i < arr.size();i++)
    {
        cur->next = new ListNode(arr[i]);
        cur = cur->next;
    }

    return head;
}




// 创建一条单链表