	#include<ctgmath>
bool solve(int n) {
    int digit,old_digit;
    int total=0;
    int number_dig=0;
    //copy the integer
    int copy=n;
    int second_cop=n;
    //get the digit
    while(second_cop!=0)
    {
        old_digit=second_cop%10;
        number_dig++;
        second_cop=second_cop/10;
    }
    while(n!=0)
    {
    digit=n%10;
    total=total+pow(digit,number_dig);
    //remove the last digit
    n=n/10;
    }
    if(total==copy)
    {
        return true;
    }
    else
    {
        return false;
    }

}