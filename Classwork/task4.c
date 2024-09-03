#include<stdio.h>
main()
{
	int n,i, fac=1;
	
	printf("enter number:");
	scanf("%d",&n);
	
	for(i=10;i>=n;i--)
	{
		fac=fac+i;
	
	}
		printf("%d",fac);
}

