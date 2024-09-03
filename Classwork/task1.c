#include<stdio.h>
main()
{
	int n,i=1, fac=1;
	printf("enter number:");
	scanf("%d",&n);
	//13456
	while(i<=n)
	{
		fac=fac*i;
		i++;
	}
	printf("factorial is:%d",fac);
}
