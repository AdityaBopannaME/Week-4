#include<stdio.h>
#include<conio.h>
void main()
{
   int m,n,i,numbr;
   clrscr ();
   printf("Enter the 2 extremes \n ");
   scanf("%d %d",&m,&n);
   for(i=m;i<=n;i++)
   {
      numbr=i;
      if(numbr%2==0)
      {
	printf("%d\t", numbr);
	}
      }
      getch();

   }
