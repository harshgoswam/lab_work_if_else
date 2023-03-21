#include<stdio.h>

main()

{
	int A,B,C,D;
	
	printf("enter value of A,B,C,D=");
	
	scanf ("%d%d%d%d",&A,&B,&C,&D);
	
	(A>B)?(A>C)?(A>D)? printf("A is MAX") : printf("D is MAX"):(C>D)? printf("C is MAX"):printf("D is MAX")
	     :(B>C)?(B>D)? printf("B is MAX") :  printf("D is MAX"):(C>D)? printf("C is MAX"):printf("D is MAX");
}



