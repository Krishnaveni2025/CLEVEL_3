//Question: Get a number from user and 
//Check Prime or Not and print the result.
//Write your code inside the function. 
//Do not Change the format.
//Example: 
//Input: 61 Output Number is Prime. 
//Input: 1200 Output: Number is not Prime.
#include <stdio.h>
int isPrime(int no);
int main()
{
int number,result;
scanf("%d",&number);
result = isPrime(number);
if(result == 1)
printf("Number is Prime");
else
printf("Number is not Prime");
return 0;
}
int isPrime(int no)
{
int result;
// Your Program Here
int i,c=0;
    i=1;
    while(i<=no) {
        if(no%i ==0)
            c++;
        i++;
    }
    if(c==2)
        result =1;
    else
        result =0;

return result;
}