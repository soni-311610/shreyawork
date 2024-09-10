#include<stdio.h>

main()
{
	int i,j;
    int n=5;
    int $;

	for(i=0;i<n;i++) // row
	{
     for(j=0; j<2*(n-i)-1; j++ )
     {
     	printf("_");
	 }
		
		for(j=0;j<=i;j++) //colloum
{

  printf("* ");
}
printf("\n");
}
}
