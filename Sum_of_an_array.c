#include <stdio.h>

int main()
{
    int i,n,s,a[100];
    printf("Enter the elments:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    s=0;
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    printf("%d",s);

    return 0;
}
