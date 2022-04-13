#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    int n;
    vector<int> v;
    int a;
    cin>>n;
    for(int i=0 ;i<n; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(),v.end()),v.end());
    for(int i:v)
    {
        cout<<i<<' ';
    }
    //cout<<'\n';
    return 0;
}