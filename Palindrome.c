# include <stdio.h>
int main()
{
int N,n,r,rev=0;
scanf("%d",&n);
N=n;
while (n>0)
{
	r=n%10;
	rev=rev*10+r;
	n=n/10;
}
if(N==rev)
{
    printf("Palindrome");
}
else 
{
   printf("Not Palindrome");
}
}