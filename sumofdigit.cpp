int solve(int num) {
    int digit;
    int total=0;
    int newnum=num;
   
   
    while(num!=0)
    {
        digit=num%10;

        total=total+digit;

        num=num/10;
    }
    return total;
}