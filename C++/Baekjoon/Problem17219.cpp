#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    vector<pair<string, string>> v;
    int n,m;
    cin>>n>>m;

    for(int i=0; i<n; i++)
    {
        string s1, s2;
        cin>>s1>>s2;
        v.push_back(make_pair(s1,s2));
    }

    sort(v.begin(),v.end());

    for(int i=0; i<m; i++)
    {
        string s;
        cin>>s;
        int low = 0;
        int high = n-1;

        while(low<=high)
        {
            int mid = (low+high)/2;
            if(v[mid].first==s) 
            {
                cout<<v[mid].second<<'\n';
                break;
            }
            else if(v[mid].first<s) low = mid+1;
            else if(v[mid].first>s) high = mid-1;
        }
    }
}