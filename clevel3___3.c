//Question: Get a number from user and 
//Check whether the sum of digits is 14 and 
//print the result. 
//Write your code inside the function. 
//Do not Change the format.
//Example: 
//Input: 59 Output: Sum of Digits is 14. 
//Input :123 Output: Sum of digits is not 14
#include <stdio.h>
int sum14(int no);
int main()
{
int number,result;
scanf("%d",&number);
result = sum14(number);
if(result == 1)
printf("Sum of Digits is 14");
else
printf("Sum of Digits is not 14");
return 0;
}
int sum14(int no)
{
int result;
// Your Program Here
int sum=0;
while(no>0){
sum += no%10;
no=no/10;
}
if(sum == 14)
    result=1;
else
    result=0;

return result;
}
