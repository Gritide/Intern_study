bool solve(int n) {
    int updater=1;
    bool temp=false;
    if(n==1)
    {
        temp=true;
    }
    else{
    for(int i=0;i<31;i++)
    {
        updater=updater*2;
        if(updater==n)
        {
            temp=true;
            break;
        }
    }
    }
    return temp;
}
