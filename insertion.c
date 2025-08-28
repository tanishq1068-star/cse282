#include <stdio.h>

int main()
{
int arr[10];
int len;ṇ
scanf("%d ",&len);
arr[10]=arr[len];
for(int i=0;i<len;i++)
{
    scanf("%d",&arr[i]);
}
for(int i=0;i<len;i++)
{
    arr[i+1]=arr[i];
}
arr[0]=5;
for(int i=0;i<len;i++)
{
    printf("%d",arr[i]);
}
return 0;
}