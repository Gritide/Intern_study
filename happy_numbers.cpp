
bool solve(int n) {
    int digit;
        while(1)
        {
            int temp=0;
            while(n!=0)
            {
                digit=n%10;
                temp=temp+digit*digit;
                n=n/10;
            }
            n=temp;
            if(temp<10)
            {
             break;
            }
        }
      if(n==1)
      {
          return true;
      }
      else{
          return false;
      }
    }
    
