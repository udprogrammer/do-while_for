#include<stdio.h>


main()
{
	int i=1, n;
	printf("Enter value n = ");
	scanf("%d",&n);

	do{
		printf("%d ",n);
		printf("* %d", i);
		printf(" = %d\n", n*i);
		i++;
	}while(i<=10);
}
