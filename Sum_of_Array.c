#include<stdio.h>
int main()
{
    int arr[100],i,n,s;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        
            s=s+arr[i];
        
    }
    printf("%d",s);
    return 0;
}