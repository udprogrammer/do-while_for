#include<stdio.h>

main()
{	
	int i=1,n;
	printf("Enter value of n = ");
	scanf("%d",&n);
	
	do{
		if(n%2==0){
		  printf("%d\n",n);
		}

		n--;
	}while(n>=i);

}
