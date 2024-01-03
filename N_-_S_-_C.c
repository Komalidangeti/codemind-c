#include<stdio.h>
int main()
{
    int i,a,b,square,cube;
    scanf("%d%d",&a,&b);
    for(i=a+1;i<b;i++)
    {
        square=i*i;
        cube=i*i*i;
        printf("%d %d %d
",i,square,cube);
    }
}