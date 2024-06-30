//Question: Get a number from user,
//find the number of digits and print the same.
//Example: 
//Input: 34678 Output: 5. 
//Input: 12345678 Output: 8
#include <stdio.h>
int count_digits(int no);
int main()
{
int number, result;
scanf("%d",&number);
result = count_digits(number);
printf("%d",result);
return 0;
}
int count_digits(int no)
{
int result;
// Your Program Here
result =0;
while (no != 0){
no=no/10;
result++;
}
return result;
}