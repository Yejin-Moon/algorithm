#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a,b;
    cin>>a>>b;
    int alen = a.length();
    int blen = b.length();

    long long sum=0;

    for(int i=0; i<alen; i++)
    {
        for(int j=0; j<blen; j++)
        {
            sum+=(a[i]-'0')*(b[j]-'0');
        }
    }
    cout<<sum;
}