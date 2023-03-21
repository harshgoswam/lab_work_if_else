#include<stdio.h>

main()

{
	int A,B,C;
	
	printf("enter value of A,B,C=");
	
	scanf ("%d%d%d",&A,&B,&C);
	
	(A>B)?(A>C)? printf("A is MAX") : printf("C is MAX") 
	     :(B>C)? printf("B is MAX") :  printf("C is MAX");
}



