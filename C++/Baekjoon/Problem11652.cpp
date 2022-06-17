#include <iostream>
#include <map>
using namespace std;
long long bigele = 0;
int big = 0;

int main()
{
    map<long long, int> m1;

    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        long long a;
        cin>>a;
        if(m1.find(a)==m1.end()) m1.insert({a,1});
        else m1[a]++;
        if(m1[a]>big || m1[a]==big && bigele>a) 
        {
            big=m1[a];
            bigele=a;
        }
    }
    cout<<bigele<<endl;
}