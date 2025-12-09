#include<stdio.h>
int main()
{
    int A1,A2,A3,B1,B2,B3;
    scanf("%d%d%d%d%d%d",&A1,&A2,&A3,&B1,&B2,&B3);
    int minA=A1;
    if(A2<minA)minA=A2;
    if(A3<minA)minA=A3;
    int aliceScore=A1+A2+A3-minA;
    int minB=B1;
    if(B2<minB)minB=B2;
    if(B3<minB)minB=B3;
    int bobScore=B1+B2+B3-minB;
    if(aliceScore>bobScore)
    printf("Alice");
    else if(bobScore>aliceScore)
    printf("Bob");
    else
    printf("Tie");
    return 0;
}
