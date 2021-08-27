#include<iostream>
using namespace std;
int lol(int g)
{
    int answer=g;
    int increment=g;
    for(int j=1;j<3;j++)
    {
        //add it input amount time do that twice
    for(int i =1; i<g;i++){
        answer=answer+increment;
        //3+3 =6
        //6+3=9
        //9+9=18
        //18+9=27
        
    }
    increment=answer;
    //9
    }
    return answer;
}
int main()
{
    cout<<lol(3)<<endl;
}