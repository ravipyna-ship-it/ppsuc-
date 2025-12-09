#include<stdio.h>
int main()
{
    int A;
    scanf("%d",&A);
    int aliceLikes=(A%2==0&&A%7==0);
    int bobLikes=(A%2!=0&&A%9==0);
    if(aliceLikes)
    printf("Alice");
    else if(bobLikes)
    printf("Bob");
    else
    printf("Charlie");
    return 0;
}
