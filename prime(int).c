#include<stdio.h>
int main()
{
	int i,n,f=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		f++;
	}
	if(f==2)
	printf("%d is prime",n);
	else
	printf("%d is not a prime",n);
	return 0;}
