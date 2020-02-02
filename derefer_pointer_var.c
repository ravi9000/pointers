#include<stdio.h>
int main(void)
{
  int a=87;
  float b=4.5;
  int *p1=&a;
  float *p2=&b;
  printf("address of a=%p\n",&a);
  printf("address of b=%p\n",&b);
  printf("value of p1=%d address of a= %p\n",*p1,p1);
  printf("value of p2=%.1f address of b= %p\n",*p2,p2);
  printf("address of p1=%p\n",&p1);
  printf("address of p2=%p\n",&p2);
  printf("value of a = %d %d %d\n",a,*p1,*(&a));
  printf("value of b= %.1f %.1f %.1f\n",b,*p2,*(&b));
  return 0;
}
