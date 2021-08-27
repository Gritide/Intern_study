string solve(string s) {
    string cre="";
    int count =1;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==s[i+1])
        {
            count++;
        }
       
        else if(s[i]!=s[i+1])
        {
            cre=cre+to_string(count)+s[i];
            count=1;
        }


    }
    
    return cre;

}