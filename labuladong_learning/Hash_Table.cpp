
/**
*
 *哈希表就是一个加强版数组
 *
 * 哈希表底层就是一个数组（table），它先把key通过一个哈希函数（hash)转化成数组里面的索引，然后增删改查和数组基本相同
 *
 * 特点：
 *      key是唯一的，values可以重复
 *
*/

/**
*
 * int h = key.hashCode();
// 位运算，把最高位的符号位去掉
// 另外，位运算的运行速度也会比一般的算术运算快
// 所以你看标准库的源码，能用位运算的地方它都会优先使用位运算
h = h & 0x7fffffff;  0111 1111 1111 1111 1111 1111 1111 1111 1111
// 这个 0x7fffffff 的二进制表示是 0111 1111 ... 1111
// 即除了最高位（符号位）是 0，其他位都是 1
// 把 0x7fffffff 和其他 int 进行 & 运算之后，最高位（符号位）就会被清零，即保证了 h 是非负数
 *
*/


//int hash(K key)
//{   int h = key.hashCode();
//    // 保证非负数
//    h = h & 0x7fffffff;
//    // 映射到table数组的合法索引
//    return h % table.length;
//
//}

// 直接取余运算性能低，一般追求效率使用位运算


#include <vector>
#include <list>
#include <algorithm>
using namespace std;

// 用拉链法解决hash冲突的简化实现

class ExampleChainingHashMap
{
    // 链表节点
    // 注意这里必须同时存储key和value
    // 因为要通过key找到对应的value
    struct KVNode
    {
        int key;
        int value;
        // 为了简化，我这里直接用标准库的LinkedList链表
        // 所以这里就不添加next指针了

        KVNode(int key, int value) : key(key), value(value){}
    };

    // 底层table数组中每个元素是一链表
    vector<list<KVNode>> table;


public:
    ExampleChainingHashMap(int capacity):table(capacity){}

    int hash (int key)
    {
        return key % table.size();
    }

    // 查
    int get(int key)
    {
        int index = hash(key);

        if(table[index].empty())
        {
            // 链表为空，说明key不存在
            return -1;
        }
        for(const auto& node:table[index])
        {
            if (node.key == key)
            {
                return node.value;
            }
        }

        return -1;
    }

    // 增、改

};
