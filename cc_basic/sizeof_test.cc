#include<stdio.h>

static int j;

void fun2(void)
{
   j=0;
   j++;
}

void TestSizeof(void)
{
   printf("length of j is:%d\n", sizeof(j));
   printf("length of int is:%d\n", sizeof(int));
   printf("length of int is:%d\n", sizeof j);

   int *p = NULL;
   printf("sizeof(p) is:%d\n", sizeof(p));
   printf("sizeof(*p) is:%d\n", sizeof(*p));

   int a[10];
   printf("sizeof(a) is:%d\n", sizeof(a));
   printf("sizeof(a[10]) is:%d\n", sizeof(a[10]));
   printf("sizeof(&a) is:%d\n", sizeof(&a));
   printf("sizeof(&a[0]) is:%d\n", sizeof(&a[0]));
}

int main()
{
   int k;
   for(k=0; k<10; k++)
   {
      fun2();
   }

   TestSizeof();
   return 0;
}
