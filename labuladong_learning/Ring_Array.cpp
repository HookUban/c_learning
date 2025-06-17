

#include <iostream>
#include <stdExcept>
#include <ostream>

template <typename T>

class CycleArray{

    std::unique_ptr<T[]> arr;
    int start;
    int end;
    int count;
    int size;


    // 自动缩容辅助函数
    void resize(int new_size)
    {
        // 创建新数组
        std::unique_ptr<T[]> newArr = std::make_unique<T[]>(new_size);
        // 将久数组中的元素拷贝到新数组中
        for (int i = 0; i < count; i++)
        {
            newArr[i] = arr[(start+i) / size];
        }

        arr = std::move(newArr);
        // 重置start 和 end指针
        start = 0;
        end = count;
        size = new_size;
    }


public:
    CycleArray() : CycleArray(1)
    {

    }

    explicit CycleArray(int size) : start(0), end(0), count(0), size(size){
        arr = std::make_unique<T[]>(size);
    }

    void addFirst(const T &val)
    {
        if (isFull())
        {
            resize(size * 2);
        }

        start = (start - 1 + size) % size;
        arr[start] = val;
        count++;
    }

    void removeFirst()
    {
        if (isEmpty())
        {
            throw std::runtime_error("Array is empty");
        }

        arr[start] = T();
        start = (start + 1) % size;
        count--;

        if (count > 0 && count == size / 4)
        {
            resize(size / 2);
        }
    }

    void addLast(const T &val)
    {
        if (isFull())
        {
            resize(size * 2);
        }

        arr[end] = val;
        end = (end + 1) % size;
        count++;
    }

    void removeLast()
    {
        if (isEmpty())
        {
            throw std::runtime_error("Array is empty");
        }
        return arr[start];
    }

    T getLast() const {
        if (isEmpty())
        {
            throw std::runtime_error("Array is empty");
        }

        return arr[(end - 1 + size) % size];
    }


    bool isFull() const {
        return count == size;
    }

    int getSize() const {
        return count;
    }

    bool isEmpty() const
    {
        return count==0;
    }
};