bool solve(int n) {
    bool temp=false;
    int ekmek=n/2;
    if(n==0 || n==1)
    {
        temp=true;
    }
    else{
    for(int i=0;i<=ekmek;i++)
    {
        if(i*i==n)
        {
            temp=true;
            break;
        }
    }
    }
    return temp;
}