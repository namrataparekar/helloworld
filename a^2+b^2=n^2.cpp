#include<stdio.h>
/*program for a^2+b^2=n^2*/
int main()
{
	int n,i,j;
	
	printf("enter a number n\n ");
	scanf("%d",&n);
	
	i=0;
	printf("The numbers a and b are\n\n");
	 
	while(i<=n)
	{
		j=0;
		while(j<=n)
		{
			if(i*i+j*j==n*n)
				printf(" a=%d  b=%d\n",i,j);
			j++;
		}
		i++;
	}
	return 0;
}
