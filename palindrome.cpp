#include<iostream>
#include<string>

using namespace std;

bool ek(string str)
{
   
    
    bool temp=true;
    int i=0;
    int half= str.length()/2;
    int n= str.length()-1;
    while(i<half &&n >= half)
    {
        char ch=tolower(str[i]);
        char che=tolower(str[n]);
        if(ch!=che)
        {
            temp=false;
            break;
        }
        i++;
        n--;
    }
    return temp;
}




int main()
{
    string str="tAcocat";
    cout<<ek(str);
}