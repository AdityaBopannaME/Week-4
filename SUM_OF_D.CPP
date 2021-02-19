#include<stdio.h>
#include<conio.h>
void main()
{
   int z,sum=0,num;
   clrscr();
   printf("Enter a number \n");
   scanf("%d",&num);
   while(num>0)
   {
      z=num%10;
      sum=z+sum;
      num=num/10;
   }
   printf("The sum of digits is %d", sum);
   getch();
}