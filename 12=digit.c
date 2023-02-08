//this program checks wheather the data is digit or not
#include<stdio.h>
void main()
{
int n;
printf("enter the data");
scanf("%d",&n);
if(sizeof(n)==sizeof(int))
{
printf("it is a digit");
}
else
{
printf("it is not a digit");
}
}
