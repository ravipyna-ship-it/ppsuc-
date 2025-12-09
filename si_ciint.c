#include<stdio.h>
#include<math.h>
int main()
{
	int p,t,r;
	double si,ci;
	scanf("%d%d%d",&p,&t,&r);
	si=(p*t*r)/100.0;
	ci=p*pow((1+r/100.0),t)-p;
	printf("Simple interest is:%f\n",si);
	printf("Compound interest is:%f\n",ci);
	return 0;
}
