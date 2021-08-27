bool solve(string s) {
    bool temp=true;
    for(int i=0;i<s.size();i++)
    {
       
        
        if(s[i]=='R')
        {

            for(int j=i;j<s.size();j++)
            {
                if(s[j]=='B')
                {
                    temp=false;
                    break;
                }

            }
            
            if(temp==false)
            {
            for(int z=i;z>=0;z--)
            {
                if(s[z]=='B')
                {
                    temp=false;
                    break;
                }
                else{
                    temp=true;
                }

            }
            }
            break;
        }
        
        

    }
    return temp;
}