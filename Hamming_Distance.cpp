int solve(int x, int y) {
    char  intx32[] ="00000000000000000000000000000000";
    char  inty32[] ="00000000000000000000000000000000";
    int count=0;
    for(int i=31;i>=0;i--)
    {
        if(x %2==0)
            intx32[i]='1';
        x=x/2;
    }
    for(int j=31;j>=0;j--)
    {
        if(y %2==0)
            inty32[j]='1';
        y=y/2;
    }
    for(int i=0;i<32;i++)
    {
        if(inty32[i]!=intx32[i])
        {
            count++;
        }
    }
    return count;
}