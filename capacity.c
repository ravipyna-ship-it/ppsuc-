#include<stdio.h>
int main()
{
    int T,S,B;
    long capacity;
    scanf("%d %d %d",&T,&S,&B);
    capacity = (2 * T * S * B * 512)/1024;
    printf("%ld KB",capacity);
    return 0;
}
