#include<stdio.h>
#include<conio.h>
int main()
{
  int i,j,k,n;
  clrscr();
  scanf("%d",&n);
 // printf("%d",(n/2));
  for(i=1;i<=((n/2)+2);)
  {
    for(j=i;j<=((n/2)+1);j++)
    {
     printf(" ");
    }

    for(k=1;k<=i;k++)
    {   if((k==1)||(k==i))
       {
	 printf("# ");
	 }
	 else
	 {
	printf("* ");
	}
    }
     printf("\n");
    if(i==1)
    {
     i=i+2;
     }
     else
     {
     i++;
     }
  }
    for(i=((n/2)+1);i>0;)
  {
    for(j=i;j<=((n/2)+1);j++)
    {
     printf(" ");
    }

    for(k=1;k<=i;k++)
    {   if((k==1)||(k==i))
       {
	 printf("* ");
	 }
	 else
	 {
	printf("# ");
	}
    }
     printf("\n");
    if(i==3)
    {
     i=i-2;
     }
     else
     {
     i--;
     }
  }

   getch();
   return 0;
}