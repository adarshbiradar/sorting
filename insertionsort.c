#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a[20],n,temp,i,j;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	printf("Enter the elements of the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{
		temp = a[i];
		j=i-1;
		while(temp<a[j] && j>=0)
		{
			a[j+1] = a[j];
			--j;
		}
		a[j+1]=temp;
	}
	printf("The sorted array is:");
	for(i=0; i<n; i++)
		printf("%d\t",a[i]);
    return 0;
}
