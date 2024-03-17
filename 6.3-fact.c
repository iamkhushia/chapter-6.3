#include<stdio.h>

main()
{
	// print the factorial of number N using for loop.
	
	int n,count,fact=1;
	
	printf("enter the number=");
	scanf("%d",&n);
	
	for(count=1 ; count<=n ; count++)
	{
		fact = fact * count;
	}
	printf("factorial of %d is %d",n,fact);
}