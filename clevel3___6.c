//Question: Get a number from user and 
//reverse that number and print. 
//Write your code inside the function. 
//Do not Change the format.
//Example: 
//Input: 123 Output: 321. 
//Input: 56789 Output: 98765.
#include <stdio.h>
int reverse_number(int no);
int main()
{
int number,result;
scanf("%d",&number);
result = reverse_number(number);
printf("%d",result);
return 0;
}
int reverse_number(int no)
{
int result;
// Your Program Here
result = 0;
while (no!=0){
int digit=no%10;
result=(result*10)+digit;
no=no/10;}
return result;
}
