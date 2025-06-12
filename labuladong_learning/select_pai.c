//
//
//#include<stdio.h>
//
//
//void selection_sort(int a[], int n)
//{
//    int i, j, min, temp;
//    for(i = 0; i < n - 1; i++)
//    {
//        min = i;
//        for(j = i + 1; j < n; j++)
//        {
//            if(a[j] < a[min])
//            {
//                min = j;
//            }
//        }
//        if(min != i)
//        {
//            temp = a[i];
//            a[i] = a[min];
//            a[min] = temp;
//        }
//    }
//
//}
//
//
//int main()
//{
//
//
//    int a[5] = {3,6, 3,2,4};
//    int len = sizeof(a) / sizeof(a[0]);
//    selection_sort(a, len);
//
//
//    return 0;
//}