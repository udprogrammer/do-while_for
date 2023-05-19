#include<stdio.h>

main()
{

    int i,n,fact;
	printf("Enter value of n = ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		printf("%d\n",i);

         fact=fact*i;
	}
	printf("factorial=%d",fact);

} 
