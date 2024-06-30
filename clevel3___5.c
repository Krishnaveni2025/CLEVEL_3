//Question: Get a number from user and 
//count the number of zeros in that number  and print. 
//Write your code inside the function. 
//Do not Change the format.
//Example: 
//Input: 100 Output: 2 . 
//Input: 1060030 Output: 4.
#include <stdio.h>
int find_no_of_zeros(int no);
int main()
{
int number,result;
scanf("%d",&number);
result = find_no_of_zeros (number);
printf("%d",result);
return 0;
}
int find_no_of_zeros (int no)
{
int result;
// Your Program Here
result = 0;
while (no!=0){
int digit= no%10;
if(digit==0){
result++;
}
no=no/10;
}
return result;
}
