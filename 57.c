#include<stdio.h>
int main()
{
int a,b,temp;
scanf("%d%d%d",&a,&b);
temp=a;
a=b;
b=temp;
printf("the swapping value is%d%d\n",a,b);
return 0;
}
