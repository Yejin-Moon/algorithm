#include <iostream>
#define max 9223372036854775807
#define min -9223372036854775808
using namespace std;

int main()
{
    long long res=0,flag=0;
    for(int i=0; i<3; i++)
    {
        int n;
        cin>>n;
        res=0;
        flag=0;
        for(int j=0; j<n; j++)
        {
            long long a;
            cin>>a;

            if(res>0 && a>0 && a>max-res) flag+=1;
            if(res<0 && a<0 && a<min-res) flag-=1;
            res+=a;
        }
        if(flag<0) cout<<"-\n";
        else if(flag>0) cout<<"+\n";
        else if(res==0) cout<<"0\n";
        else if(res<0) cout<<"-\n";
        else if(res>0) cout<<"+\n";
    }
}