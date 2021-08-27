bool solve(int num) {
    int x;
    //divided the nmber from middle
     int n,  digit, rev = 0;

   

     n = num;

     do
     {
         //get the last digist
         digit = num % 10;
         //2
         //0
         //2
         //0
         //0
         //2
         //0
         //2
         rev = (rev * 10) + digit;
         //rev=2
         //rev 20
         //rev 202
         //rev 2020
         // rev 20200
         //rev 202002
         //2020020
         //20200202

         //remove the digit
         num = num / 10;
        //num=2020020
        //num=202002
        //num=20200
        //num=2020
        //num 202
        //20
        //2
     } while (num != 0);

     

     if (n == rev)
         return true;
     else
        return false;

    //then read from reverse
}