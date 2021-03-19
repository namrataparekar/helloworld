//program to count number of repeated digits
#include<stdio.h>
int occur(int n,int k)
{
	if (n==0)
		return 0;
	int digit=n&10;
	if(digit==k)
		return 1+occur(n/10,k);
	return occur(n/10,k);
}
int main()
{
	int n,k,ans;
	printf("enter number\n");
	scanf("%d\n",&n);
	printf("enter digit to search\n");
	scanf("%d\n",&k);
	
	ans=occur(n,k);
	printf("%d\n",ans);
	return 0;
} //Comments to demonstrate Q2
//This is last line
