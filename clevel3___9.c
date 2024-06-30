//Question: Get a two-digit number from user swap 
#include <stdio.h>
int swap_digits(int no);
int main()
{
int number, result;
scanf("%d",&number);
result = swap_digits(number);
printf("%d",result);
return 0;
}
int swap_digits(int no)
{
int result;
// Your Program Here
int ones,tens;
ones =no%10;
tens=no/10;
result =(ones*10)+tens;
return result;
}