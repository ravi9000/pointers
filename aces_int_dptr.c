#include<stdio.h>
main()
{
int arr[20],i;
for(i=0;i<5;i++)
{
scanf("%d\t",&arr[i]);
}
int*iptr;
int**diptr;
iptr[i]=arr[i];
diptr[i]=&iptr[i];
printf("%p\t,%p\t,%d\n",*(diptr+i),*(iptr+i),**(diptr+i));
}
