#include<stdio.h>
#include<conio.h>
int main()
{
  int i,j,n,t;
  clrscr();
  scanf("%d",&n);
  if(n%2==0)
  { t=n/2-1;
  }
  else
  {
  t=(n/2)+1;
  }


  for(i=1;i<=t;i++)
  {
   for(j=1;j<=i;j++)
   {
    printf("* ");
    }
  printf("\n");
  }

  if(n%2==0)
  { t=n/2;
  i=t;
  }
  else
  {
  t=(n/2);
  i=t;
  }

   for(;i>=0;i--)
  {
   for(j=1;j<=i;j++)
   {
    printf("* ");
    }
  printf("\n");
  }
  getch();
  }