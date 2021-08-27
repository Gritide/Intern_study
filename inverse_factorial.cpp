int solve(int a) {
    int number=1;
    int half=a/2;
    int news=1;
    while(news<a && number <= a)
    {
        news=news*number;
        if(news==a)
        {
            return number;
        }
        number=number+1;
    }
     
    return -1;
}