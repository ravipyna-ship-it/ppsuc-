#include<stdio.h>
int main()
{
	int a[10],n,i,key=4,l,h,mid,found=0;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	printf("Enter %d sorted elements:",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    l=0;
    h=n-1;
    while(l<=h)
    {
    	mid = (l+h)/2;
    	if(a[mid] == key)
    	{
    		printf("Element %d found at position %d",key,mid);
    		found = 1;
    		break;
		}
		else if(a[mid]<key)
		l = mid + 1;
		else
		h = mid - 1;
	}
	if(!found)
	printf("Element is Not found");
	return 0;
}
