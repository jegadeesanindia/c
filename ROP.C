#include<stdio.h>
#include<conio.h>
#include<limits.h>
int min(int t[],int n)
{
  int i,mi=INT_MIN;
  for(i=0;i<n;i++

int  main()
{
 int n,i,j,k,m=0;
 int up[50],down[50],t[50],sum=0,temp=0;
 clrscr();
 scanf("%d",&n);
 if(n==1)
 {
  sum=1;
  }
 for(i=0;i<n-1;i++)
 {
    scanf("%d",&up[i]);
 }
 for(i=0;i<n-1;i++)
 {
    scanf("%d",&down[i]);
  }
 for(i=0;i<n-1;i++)
 {
    if(up[i]>=down[i])
    {
      t[i]=up[i];
    }
    else
    {
    t[i]=down[i];
    }
 }
 for(i=n-1;i<=0;i--)
 {
    t[i]=t[i]-i;
 }
 k=min(t,n-1);
 sum=n+k;
 printf("%d",sum);
 getch();
 return 0;
 }
