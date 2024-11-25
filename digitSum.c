**Question:**  

Write a C program to calculate the **digital sum** of a given positive integer. The digital sum is obtained by repeatedly summing the digits of the number until a single-digit value is achieved.  

For example:  
- Input: `987`  
- Output: `6`  
(Explanation: `9 + 8 + 7 = 24`, and `2 + 4 = 6`)  




#include <stdio.h>

int digitalSum(int n)
{
   int sum=0;
   while(n>0 || sum>9)
   {
       if(n==0)
       {
           n=sum;
           sum=0;
       }
       sum+=n%10;
       n/=10;
   }
   return sum;
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    int result = digitalSum(number);
    printf("Digital sum of %d is: %d\n", number, result);

    return 0;
}
