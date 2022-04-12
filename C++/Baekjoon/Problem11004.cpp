#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    
    int n,index;
    cin>>n>>index;
    int a;
    vector<int> v;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());

    cout<<v[index-1];
}