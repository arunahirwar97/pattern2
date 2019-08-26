#include<stdio.h>
#include<conio.h>
int  main()
{
for(int i=1;i<=4;i++)
{
   int num1,num2,num3,maxima;

   printf("\n\n\n\nenter three value ");
   scanf("%d%d%d",&num1,&num2,&num3);

   if(num1>num2)
       {
       if(num1>num3 )
       {
	 maxima=num1;
	 }
	 else
	 {
	 maxima=num3;
	 }
	 }
	 else
	 {           if(num2>num3)
		    {
		       maxima=num2;
		       }
		       else
		       {
		       maxima=num3;
		       }

       }
	printf("maxima all three numbers=%d\n", maxima);
       getch();
	       return 0;
       }
		      }