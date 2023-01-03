#include <iostream>
using namespace std;

int main()
{
    int min=0, man=0;
    for(int i=0; i<4; i++)
    {
        int s;
        cin>>s;
        min+=s;
    }
    for(int i=0; i<4; i++)
    {
        int s;
        cin>>s;
        man+=s;
    }
    if(man>min) cout<<man;
    else cout<<min;
}