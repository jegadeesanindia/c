#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i,j,k,a[100]={0},res[100]={0},num,count=0,pos=k;
 scanf("%d",&n);
 a[0]=1;
 printf("%d\n",a[0]);
 for(i=0;i<n;i++)
 {
  k=0;
  count=1;
   while((a[i]==a[i+1])&&(a[i]!=0)&&(a[i+1]!=0))
   {
    count++;
    i++;
    }
    if(a[i]!=0)
    {
    a[i]=count;
    a[++i]=a[i];
    printf("%d %d\n",a[i],a[i-1]);
    }
  }

getch();
}