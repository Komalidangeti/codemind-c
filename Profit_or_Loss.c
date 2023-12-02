# include<stdio.h>
int main()
{
    float cp,sp;
    scanf("%f%f",&cp,&sp);
    if(sp>cp)
    {
        printf ("Profit");
    }
    else if(sp<cp)
    {
        printf("Loss");
    }
    else 
    {
        printf ("No Profit and No Loss");
    }
}