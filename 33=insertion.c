#include<stdio.h>
void main()
{
int a[15],i,pos,n,item;
printf("Enter the size of array ");
scanf("%d",&n);
printf("enter the array elements ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the elemented to be inserted ");
scanf("%d",&item);
printf("enter the position to be inserted ");
scanf("%d",&pos);
for(i=n+1;i>=pos;i--)
{
a[i+1]=a[i];
}
a[pos]=item;
n++;
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
}
