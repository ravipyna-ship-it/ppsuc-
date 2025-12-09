#include<stdio.h>
int main()
{
	char s[100],rev[100];
	int i,j,l=0;
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
	printf("\n string length is:%d",l);
	printf("\n string reverse is:%s",rev);
	return 0;
}
