#include<stdio.h>
int main()
{
    char str[101];
    scanf("%[^
]s",str);
    int u_count=0;
    for(int i=0;str[i]!=NULL;i++){
        if(str[i]>=65&&str[i]<=90)
        u_count++;
    }
    printf("%d",u_count);
}