#include <stdio.h>
int main() {
    // printf() displays the string inside quotation
    int n,i,j,a[100],k,b[100];
    printf("Enter the elements\n");
    scanf("%d",&n);
    printf("Enterthe  %d elements",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    j=0;
    k=n-1;
    while(k>=0)
    {
        b[j]=a[k];
        j++;
        k--;
    
    }
    printf("Reversed array");
    for(i=0;i<n;i++)
     {
        printf("%d\t",b[i]);
    }
    return 0;
}
