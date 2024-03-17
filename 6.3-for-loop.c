#include<stdio.h>

main()
{
	//print the sum of all numbers from 1 to N using for loop.
	
	int n,i,sum=0;
	
	printf("enter eny number=");
	scanf("%d",&n);
	
	for(i=1 ; i<=n ; i++)
	{
		sum = sum + i;
	}
	printf("sum of number=%d",sum);
}