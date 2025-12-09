#include<stdio.h>
int main()
{
    int X,Y;
    scanf("%d",&X);
    scanf("%d",&Y);
    int total_needed=30*Y;
    if(X>=total_needed)
    printf("YES");
    else
    printf("NO");
    return 0;
}
