#include<stdio.h>
main()
{
int x=41424344;
char y='a';
int*iptr=&y;
char*cptr=&x;
int**diptr=&cptr;
char**dcptr=&iptr;
printf("%p\n",*diptr);
printf("%p\n",*iptr);
printf("%d\n",**diptr);
printf("%p\n",*dcptr);
printf("%p\n",*cptr);
printf("%c\n",**dcptr);
}

