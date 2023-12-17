#include<stdio.h>
int main()
{
    int x;
    float d,h,gs;
    scanf("%d",&x);
    if(x<=10000)
    {
    d=0.80;
    h=0.2;
    }
    else if (x>10000&&x<=20000)
    {
        d=0.90;
        h=0.25;
    }
    else
    {
        d=0.95;
        h=0.3;
    }
    gs=x+x*d+x*h;
    printf("%.2f",gs);
    
    
} 