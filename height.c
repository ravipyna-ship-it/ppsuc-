#include<stdio.h>
int main()
{
    int x,y,height;
    scanf("%d %d",&x,&y);
    if(x>y)
    height = x;
    else
    height = y;
    printf("%d",height);
    return 0;
}
