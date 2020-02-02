#include<stdio.h>
void fibonaci(int*,int*,int*,int(*fptr)(const char*,...),int(*fptr1)(const char*,...));
main()
{
int x,y,z;
void(*fptr)(int*,int*,int*,int(*fptr)(const char*,...),int(*fptr1)(const char*,...));
fptr=fibonaci;
fptr(&x,&y,&z,printf,scanf);
}
void fibonaci(int*a,int*b,int*c,int(*fptr)(const char*,...),int(*fptr1)(const char*,...))
{
int i,j=10;
fptr("enter a,b values\n");
fptr1("%d,%d",&a,&b);
fptr("%d\n",*a);
for(i=1;i<j;i++)
{
*c=*a+*b;
fptr("%d\n",*c);
*a=*b;
*b=*c;
}
}

