#include<stdio.h>

main()
{
	// print the multiplication table of the number N using any type of loop.
	
	int i,n;
	
	printf("enter ent number=");
	scanf("%d",&n);
	
	for(i=1 ; i<=10 ; i++)
	{
		printf("%d * %d = %d\n",n,i,n*i);
	}
}