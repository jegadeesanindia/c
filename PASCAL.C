#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c,d,n,x=1,j;
clrscr();
printf("enter limits");
scanf("%d",&n);
d=n;
printf("\n");
for(a=1;a<=n;a++)
{
for(j=1;j<=n-a;j++)
{
printf(" ");

}
for(b=1;b<=a;b++)
{
if(b==1)
{
x=1;
printf("%4d",x);
}
else
{
x=(x*(a-b+1)/(b-1));
printf("%4d",x);
}}
printf("\n");
}
getch();
return 0;
}