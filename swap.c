#include<stdio.h>
void swap(int*,int*);
main()
{
int a=10,b=20;
printf("main:address=%p data(a)=%d\n",&a,a);
printf("main:address=%p data(b)=%d\n",&b,b);
swap(&a,&b);
printf("main:address=%p data(a)=%d\n",&a,a);
printf("main:address=%p data(b)=%d\n",&b,b);
}
void swap(int*x1,int*x2)
{
int temp;
printf("swap function is invoked\n");
printf("swap:address=%p data=%d\n",x1,*x1);
printf("swap:address=%p data=%d\n",x2,*x2);
temp=*x1;
*x1=*x2;
*x2=temp;
printf("swap:address=%p data=%d\n",x1,*x1);
printf("swap:address=%p data=%d\n",x2,*x2);
}

