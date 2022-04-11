#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int max=0;
    int line=0;

    while(n>max)
    {
        line++;
        max = max+line;
    }

    int un=line, up=1;
    while(1)
    {
        if(n==max) break;
        un--;
        up++;
        n++;
    }

    if(line%2==0)
    {
        cout<<un<<"/"<<up<<endl;
    }
    else
    {
        cout<<up<<"/"<<un<<endl;
    }
    return 0;
}