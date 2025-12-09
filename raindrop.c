#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int hasFactor = 0;
    if(n%3==0)
    {
        printf("Pling");
        hasFactor = 1;
    }
    if(n%5==0){
    printf("Plang");
    hasFactor = 1;
    }
    if(n%7==0)
    {
        printf("Plong");
        hasFactor = 1;
    }
    if(!hasFactor)
    printf("%d",n);
    printf("");
    return 0;
}
