#include<stdio.h>

void main()

{

	int n,i,a[13],index;	printf("Enter the number of array: \n");

	scanf("%d",&n);

	printf("Enter the array elements: \n");

	for(i=0;i<=n;i++)

	   scanf("%d",&a[i]);

	printf("The array element is :\n");

	for(i=0;i<=n;i++)

	   printf("%d ",a[i]);

	printf("\nEnter the index to be deleted (0 to n): \n");

	scanf("%d",&index);

	for(i=index;i<n-1;i++)

    {

	   a[i]=a[i+1];

    }

    n--;

    printf("The element after deletion is: \n");

    for(i=0;i<=n;i++)

	   printf("%d ",a[i]);

}

    

	
