# include<stdio.h>
int main()
{
    int n;
    float ser=1.0,c=0.0,s;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        s=ser/i;
        c+=s;
    }
    printf("%.2f",c);
}