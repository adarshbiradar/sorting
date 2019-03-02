#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[20],i,j,min,n,temp;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[min]>a[j])
                min=j;
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
    printf("The sorted array is:\n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    return 0;
}
