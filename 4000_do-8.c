#include<stdio.h>

main()
{

    int i=1,n,sum=0;
	printf("Enter value of n = ");
	scanf("%d",&n);
	
	do{
		printf("%d\n",i);
		sum = sum + i ;
		i++;

	}while(i<=n);
	printf("SUM=%d",sum);

}  
