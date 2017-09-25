#include<stdio.h>
#include<conio.h>
#include<string.h>
int cmp(char a[],char b[])
{
  int i=0,j=0,n=0;
  n=strlen(a);
  for(i=0;i<n;i++)
  {
    if(a[i]!=b[i])
    {
      return -1;
      }
  }
  return 0;
}

int main()
{
   int ch,n=1,i,j,k;
   char a[100][100],b[100][100],c=0,d[100];
   clrscr();
   while(ch!=0)
   {
   scanf("%s%s",a[n],b[n]);
   printf("Choice:");
   scanf("%d",&ch);
   n++;
   }
   scanf("%s",d);
   for(i=1;i<n;i+=2)
   {
     if(strcmp(a[i],d)==0)
     {
     break;
     }
   }
    j=i;
    for(i=1;i<n;i+=2)
    {
       if(strcmp(b[j],a[i])==0)
       {
	 printf("%s %s",b[j],a[i]);
	 c++;
       }
     }

     printf("%d",c);
   getch();
   return 0;
 }