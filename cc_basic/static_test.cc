#include<stdio.h>

static int j;

void fun1(void)
{
   static int i=0;
   i++;
   //printf("i=%d\n", i);
}

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
}

int main()
{
   int k;
   for(k=0; k<10; k++)
   {
      fun1();
      fun2();
   }
   //printf("j=%d\n", j);

   TestSizeof();
   return 0;
}
