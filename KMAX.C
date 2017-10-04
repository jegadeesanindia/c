#include<stdio.h>
#include<conio.h>
#include<limits.h>
int main()
{
int a[100],i,j,k,l,max,n;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
scanf("%d",&k);
for(i=1;i<k;i++)
{
   max=a[0];
 for(j=1;j<n;j++)
 {
  if(max<a[j])
  {
    max=a[j];
  }
 }
 for(l=0;l<n;l++)
 {
   if(max==a[l])
    {
      a[l]=INT_MIN;

     }
 }
}
max=a[0];
for(i=0;i<n;i++)
{
 if(max<a[i])
 {
 max=a[i];
 }
}
printf("%d",max);
getch();
return 0;
}