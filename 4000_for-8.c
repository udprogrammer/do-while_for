#include<stdio.h>

main()
{

    int i,n,sum=0;
	printf("Enter value of n = ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		printf("%d\n",i);
		sum = sum + i ;

	}
	printf("SUM=%d",sum);

}  
