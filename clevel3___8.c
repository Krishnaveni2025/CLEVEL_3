//Question: Get a number from user and 
//check whether the digits are in  ascending order.
//Example: 
//Input: 1234 Output: Yes. 
//Input: 5687 Output: No
#include <stdio.h>
int check_assending(int no);
int main()
{
    int number, result;
    scanf("%d",&number);
    result = check_assending(number);
    if(result == 1)
        printf("Yes");
    else
        printf("No");
    return 0;
}
int check_assending(int no)
{
    int result;
// Your Program Here
    int prev_digit=no%10;
    no=no/10;
    result =1;
    
    while (no!=0) {
        int current_digit=no%10;
        if(current_digit <prev_digit) {
            prev_digit=current_digit;
            no=no/10;
            
        }
        
        else {
            result=0;
            break;
        }
    }
 
    return result;
}
    