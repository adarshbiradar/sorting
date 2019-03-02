#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[20],i,j,n,temp,flag=0;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {
        flag=0;
        for(j=0;j<n;j++)
        {
            if(a[j]>a[j+1])
        {
             temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            flag=1;
        }

        }
        if(flag==0)
            break;
    }
    printf("The sorted array is \n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    return 0;
}
