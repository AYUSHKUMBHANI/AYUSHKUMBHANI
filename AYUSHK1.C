#include<stdio.h>
#include<conio.h>
main()
{
 clrscr();
 int a,b,c;
 printf("Enter value A =");
 scanf("%d",&a);
 printf("Enter value B =");
 scanf("%d",&b);
 c=a;
 a=b;
 b=c;
 printf("swapping value A = %d\n",a);
 printf("swapping value B =%d",b);

  getch();
}