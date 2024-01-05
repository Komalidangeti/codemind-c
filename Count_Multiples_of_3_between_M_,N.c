#include<stdio.h>
int main()
{
    int i,j,count=0;
    scanf("%d %d",&i,&j);
    for(int a=i;a<j;a++){
        if(a%3==0)
        count++;
        
    }
     printf("%d",count);
}