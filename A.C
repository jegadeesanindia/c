#include<stdio.h>
#include<conio.h>
int main()
{
 int a[100],n,i,j,k,m=0,b[100]={0},max,t;
 clrscr();
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
   m=0;
    for(j=i+1;j<n;j++)
    {
      if(a[i]<a[j])
      {
	 // printf("%d",a[j]);
	  m++;
      }
    }
    b[i]=m;
  }
  max=b[i];
  for(i=0;i<n;i++)
  {
    if(max<b[i])
    {
    max=b[i];
    }
  }
  for(i=0;i<n;i++)
  {
    if(max==b[i])
    { k=i;
    break;
    }
  }
  printf("%d ",a[k]);
  t=a[k];
  for(i=k+1;i<n;i++)
  {
    if(t<a[i])
    {
    t=a[i];
    printf("%d ",a[i]);
    }

  }
   getch();
  return 0;
}