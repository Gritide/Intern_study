#include<iostream>
using namespace std;
bool hello(string str)
{
    bool temp=true;
    for(int i=0;i<str.size()-1;i++)
    {
        for(int j=i+1;j<str.size();j++)
        {
            if(str[i]==str[j])
            {
                temp=false;
                break;
            }
        }
    }
    return temp;
}
int main()
{
    cout<<hello("ekmek")<<endl;
    cout<<hello("no")<<endl;
}