#include <stdio.h>


//int count_num_of_1(unsigned int n)
//{
//    int count = 0;
//    while (n)
//    {
//        if ((n%2) == 1)
//        {
//            count++;
//        }
//        n = n/2;
//    }
//
//    return count;
//}


//int count_num_of_1(int n)
//{
//    int  i = 0;
//    int count = 0;
//    for (i = 0; i < 32; i++)
//    {
//        if ((n>>i)&1 == 1)
//        {
//            count++;
//        }
//    }
//    return count;
//}
//int count_num_of_1(int n)
//{
//    int count = 0;
//    while (n)
//    {
//        n = n & (n-1);
//        count++;
//    }
//
//    return count;
//}
//
//
//int main()
//{
//    int num = 0;
//    scanf("%d", &num);
//    int n = count_num_of_1(num);
//    printf("%d\n", n); // 输出 1 的个数
//
//    return 0;
//}

//int count_diff_bit(int m, int n)
//{
//    int i = 0;
//    int count = 0;
//    for (i = 0; i< 32; i++)
//    {
//        if(((m>>i)&1  )!= ((n>>i)&1))
//        {
//            count++;
//        }
//    }
//    return count;
//}

//int count_diff_bit(int m, int n)
//{
//    int count = 0;
//    // 异或操作
//    int ret = m^n;
//    // 统计一下二进制中有多少个1
//    while (ret)
//    {
//        ret = ret & (ret-1);
//        count++;
//    }
//    return count;
//}
//
//int main()
//{
//    int m = 0;
//    int n = 0;
//    scanf("%d %d", &m, &n);
//
//    int ret = count_diff_bit(m, n);
//    printf("%d\n", ret);
//    return 0;
//}

int main()
{

    int i = 0;
    int num = 0;
    scanf("%d", &num);
    // 获取奇数位
    for(i = 30; i >= 0; i-=2)
    {
        printf("%d ", (num>>i)&1);
    }
    printf("\n");
    // 获取偶数位
    for (i = 31; i >= 0; i-=2)
    {
        printf("%d ", (num>>i)&1);
    }
    return 0;
}