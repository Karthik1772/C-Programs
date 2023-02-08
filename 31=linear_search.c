#include<stdio.h>
void main()
{
int a[10],i,n,found=0;
printf("enter the element to be inserted ");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
printf("enter the search element");
scanf("%d",&n);
for(i=0;i<10;i++)
{
if(a[i]==n)
found=1;
break;
}
if(found==1)
{
printf("the element is found in %d ",i);
}
else
{
printf("element not found");
}
}
