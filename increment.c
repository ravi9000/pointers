#include<stdio.h>
void increment(int *);
main()
{
int a=11;
printf("main:address=%p data=%d\n",&a,a);
increment(&a);
printf("main:address=%p data=%d\n",&a,a);
}
void increment(int*x)
{
printf("increment function invoked");
printf("increment:address=%p data=%d\n",x,*x);
*x=*x+1;
printf("increment:address=%p data=%d\n",x,*x);
}

