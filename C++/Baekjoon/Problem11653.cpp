#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    int n;
    cin>>n;
    vector<int> v;
    int i=2;
    while(n!=1)
    {
        if(n%i==0)
        {
            n=n/i;
            v.push_back(i);
            i=2;
        }
        else i++;
    }
    sort(v.begin(),v.end());
    for(int i:v)
    {
        cout<<i<<'\n';
    }
}