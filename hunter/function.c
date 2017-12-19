#include<stdio.h>
int main()
{
int a[8],max=0,i,j;
for(i=0;i<8;i++)
scanf("%d",&a[i]);
max=a[0];
for(i=1;i<8;i++)
{
if(max<a[i])
max=a[i];
}
printf("%d",max);
}
