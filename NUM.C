#include<stdio.h>
#include<conio.h>
int main()
{
int num,temp;
int a[100],i=0,j,n,k;
char c[][10]={"one","two","three","four","five","six","seven","eight","Nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventen","eightten","Nineten"};
char b[][10]= {"ten","twenty","thirty","fifty","forty","sixty","sevnty","eighty","ninty"};
clrscr();
scanf("%d",&num);

temp=num;
while(num!=0)
{
  a[i]=(num%10);
  num=num/10;
  i++;
  }
  n=i;
  for(i=n-1;i>=0;i--)
  {
    if(i==2)
    {
      printf("%s hundred",c[a[i]-1]);
      }
      else if(i==1)
       {
	  if(a[i]>1)
	  {
	  printf("%s",b[a[i]-1]);
	  }
	  else if(a[i]==1)
	  {
	  printf(" %s",c[(temp%100)-1]);
	  break;
	  }
       }
       else if(i==0)
       {
	 printf(" %s",c[a[i]-1]);
	 }
  }


getch();
return 0;
}