#include<stdio.h>
main(){
	int n;
	printf("tempreture :");
	scanf("%d",&n);

	if  (n<=10)
	{
		printf("freeze  weather");
	}

		else if (n<=20)
	{
		printf("cold weather");
	}
   else if (n<=30)
	{
		printf("normal weather");
	}
	else{
			printf("up hot weather");
	}	
}
