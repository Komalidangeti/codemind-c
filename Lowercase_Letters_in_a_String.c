#include<stdio.h>
int main()
{
  char str[101];
  scanf("%[^
]s",str);
  int l_count=0;
  for( int i=0;str[i]!=NULL;i++)
{
    if(str[i]>=97&&str[i]<=122)
    l_count++;
}
printf("%d",l_count);
}