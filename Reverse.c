 #include <stdio.h>

#include <stdlib.h>

#define size 6

int main(){

    int arr[size],n,i;

    printf("Enter the size :");

    scanf("%d",&n);

    printf("Enter the array elements:\n");

    for(i=0;i<n;i++)

        scanf("%d",&arr[i]);

     printf("The array element is :\n");

      for(i=0;i<n;i++)

          printf("%d\n",arr[i]); 

    int temp;

    for(int i = 0; i<n/2; i++){

        temp = arr[i];

        arr[i] = arr[n-i-1];

        arr[n-i-1] = temp;

    }

    printf("The array in reverse order is : \n");

    for(int i = 0; i < n; i++){

        printf("%d\n", arr[i]);

    }

    return 0;

}
