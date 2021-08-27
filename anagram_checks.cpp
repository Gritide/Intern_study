bool solve(string s0, string s1) {
    int count=0;
    bool temp= true;
    int not_found=0;
    string z;
   
   if(s0.size()==s1.size())
   {
        for (int i=0;i<s0.size();i++)
        {
            count=0;
            for ( int j=0; j<s1.size();j++)
            {
                if(s0[i]==s1[j])
                {
                    count=1;
                    s1.splice(j,1);
                    break;
                }
                
            }
            if(count == 0)
                {
                    not_found = 1;
                    break;
                }
        }
        if(not_found == 1)
            temp=false;
        else
            temp= true;
   }
   if(s0.size()!=s1.size())
   {
       temp=false;
   }
   return temp;
  
