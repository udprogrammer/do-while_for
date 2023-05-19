#include<stdio.h>


main()
{
	int i, n;
	printf("Enter value n = ");
	scanf("%d",&n);

	for(i=1;i<=10;i++){
		printf("%d ",n);
		printf("* %d", i);
		printf(" = %d\n", n*i);	
	}
}
