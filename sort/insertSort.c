#include <stdio.h>

#define LENGTH(array) ( (sizeof(array)) / (sizeof(array[0])) )

void insertSort(int a[], int length) {
   int i, j;
   int insertRecord = 0;
   for (i=1; i<length; i++)
   {
      //printf("i=%d, a[%d]=%d\n", i, i, a[i]);
      if (a[i] < a[i-1])
      {
         insertRecord = a[i];
         //将比insertRecord大的数据向后移
         for( j=i-1; j>=0 && insertRecord < a[j]; j--)
         {
            //printf("j=%d, a[%d]=%d\n", j, j, a[j]);
            a[j+1] = a[j];
         }

         a[j+1] = insertRecord;
      }
   }
} //end insertSort

void insert_sort(int a[], int n)
{
    int i, j, k;

    for (i = 1; i < n; i++)
    {
        //为a[i]在前面的a[0...i-1]有序区间中找一个合适的位置
        for (j = i - 1; j >= 0; j--)
            if (a[j] < a[i])
                break;

        //如找到了一个合适的位置
        if (j != i - 1)
        {
            //将比a[i]大的数据向后移
            int temp = a[i];
            for (k = i - 1; k > j; k--)
                a[k + 1] = a[k];
            //将a[i]放到正确位置上
            a[k + 1] = temp;
        }
    }
}

void main()
{
   int i;
   int a[] = {38, 49, 60, 96, 72, 23, 37, 88};
   //int a[] = {49, 38, 60, 96, 72, 23, 37, 88};
   //int a[] = {49, 38};
   int iLen = LENGTH(a);

   printf("Before sort:");
   for (i=0; i<iLen; i++)
      printf("%d ", a[i]);   
   printf("\n");   

   insertSort(a, iLen);
   //insert_sort(a, iLen);

   printf("After sort:");
   for (i=0; i<iLen; i++)
      printf("%d ", a[i]);   
   printf("\n");   
}
