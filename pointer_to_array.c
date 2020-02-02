#include<stdio.h>
main()
{
int i,arr[8]={1,2,3,4,5,6,7,8};
int (*ptr) [2];
ptr=arr;
for(i=0;i<2;i++)
{
printf("%p-%d\n",&ptr[0][i],ptr[0][i]);
}
(ptr)++;
}
