int solve(string s) {
    int count=1;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='a')
        {
            count=count*2;
        }
    }
  
    return count;
}