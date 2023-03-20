#include<stdio.h>
main()
{
	int a,b,c;
	
	printf("enter value of A,B,C=");
	
   	scanf("%d%d%d",&a,&b,&c);
   	
	if(a<b)
	{
		if(a<c)
		{
			printf("A is Min");
		}
		else
		{
			printf("C is min");
			
		}
		
	
		
	}
	else
	{ 
		if(b<c)
		{
		   printf("B is min");

		}
		else
		{
			printf("c is min");
			
		}
		
	}
	
	
	
}
