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


 char *store(char b[])
 {
   int i=0;
   char temp[100];
   while(b[i]!='\0')
   {
     temp[i]=b[i];
     i++;
     }
     return temp;
 }
int main()
{
 char a[100][100],b[100][100],c[100],d[100],*t1,*pa1,*t2,*pa2;
 int  i,j,k,n=0,ch;
 clrscr();
 while(ch!=0)
 {
    scanf("%s%s",a[n],b[n]);
    printf("choice:");
    scanf("%d",&ch);
    n++;
 }
 scanf("%s%s",c,d);
 for(i=0;i<n;i++)
 {
   if(cmp(a[i],c)==0)
   {
    t1=&(b[i]);
    }
  }
   for(i=0;i<n;i++)
 {
   if(cmp(a[i],d)==0)
   {
    t2=&(b[i]);
    }
  }
  for(i=0;i<n;i++)
  {
    if(cmp(t1,a[i])==0)
    {
      pa1=&(b[i]);
    }
 }
  for(i=0;i<n;i++)
  {
    if(cmp(t2,a[i])==0)
    {
      pa2=&(b[i]);
    }
 }
 if(cmp(pa1,pa2)==0)
 {
 printf("yes");
 }
 else
 {
 printf("NO");
 }
  getch();
  return 0;
}