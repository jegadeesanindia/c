#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,n;char a[100][100],str[100];int flag=1;
clrscr();
 scanf("%d",&n);
scanf("%s",str);
 k=0;
 for(i=0;i<n;i++)
 {
   for(j=0;j<n;j++,k++)
   {
    a[i][j]=str[k];
    }
 }
 j=0;
 for(i=0;i<n-1;i++,j++)
 {
   for(k=j+1;k<n;k++)
   { printf("%c %c\t",a[k][j],a[j][k]);
      if((a[k][j]!=a[j][k])&&((a[k][j]!=' ')||(a[j][k]!=' ')))
      {
       flag=0;
       }
   }
 }
 if(flag==0)
 printf("NO");
 else
 printf("Yes");
 getch();
 return 0;
 }