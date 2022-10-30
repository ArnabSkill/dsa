#include<stdio.h>
main()
{
int i,j,n,a[100],temp;
printf("enter n elements of array:");
scanf("%d",&n);
printf("enter unsorted array elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
for(j=0;j<n-1-i;j++)
{
if(a[j+1]<a[j])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
printf("After bubble sorting:");
for(i=0;i<=n-1;i++)
{
printf("%d\t",a[i]);
}
getch();
