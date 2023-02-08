#include<stdio.h>
void main()
{
int a[10],i,sum=0;
printf("enter the element to be inserted ");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
sum=sum+a[i];
}
printf("the summation is %d ",sum);
}
