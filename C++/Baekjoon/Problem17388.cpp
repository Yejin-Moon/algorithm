#include <iostream>
using namespace std;

int main()
{
    int s, small=101, sum=0, sidx;
    for(int i=0; i<3; i++)
    {
        cin>>s;
        if(s<small) 
        {
            small=s;
            sidx=i;
        }
        sum+=s;
    }
    if(sum<100) 
    {
        if(sidx==0) cout<<"Soongsil";
        else if(sidx==1) cout<<"Korea";
        else cout<<"Hanyang";
    }
    else cout<<"OK";
}