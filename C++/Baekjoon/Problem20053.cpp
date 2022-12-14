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
    for(int i=0; i<n; i++)
    {
        int m;
        cin>>m;
        vector<int> v;
        for(int j=0; j<m; j++)
        {
            int ele;
            cin>>ele;
            v.push_back(ele);
        }
        sort(v.begin(),v.end());
        cout<<v[0]<<" "<<v[m-1]<<'\n';
    }
}