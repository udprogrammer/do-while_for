#include<stdio.h>

main()
{

    int i=1,n,fact;
	printf("Enter value of n = ");
	scanf("%d",&n);
	
	do{
		printf("%d\n",i);

         fact=fact*i;
		i++;

	}while(i<=n);
	printf("factorial=%d",fact);

} 
