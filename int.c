#include<stdio.h>
int main()
{
	char s[100],rev[100];
	int i,l=0,j;
	scanf("%[^\n]s", s);
	for(i=0;s[i]!='\0';i++)
	{
	l++;
    }
    j=l-1;
	for(i=0;i<l;i++)
	{
		rev[i]=s[j];
		j--;
	}
	rev[l]='\0';
	printf("\nString lenght = %d",l);
	printf("\nreverse string = %s\n",rev);
	return 0;
}
