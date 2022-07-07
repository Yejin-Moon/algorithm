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
    vector<int> v2;
    int cnt=0;

    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
        v2.push_back(a);
    }
    sort(v2.begin(),v2.end());
    v2.erase(unique(v2.begin(),v2.end()),v2.end());
    for(int i=0; i<n; i++)
    {
        int start=0;
        int end = v2.size()-1;
        int mid;
        bool flag=false;
        while(start<=end)
        {
            mid = (start+end)/2;
            if(v2[mid]>v[i]) end=mid-1;
            else if(v2[mid]<v[i]) start = mid+1;
            else 
            {
                cout<<mid<<' ';
                flag=true;
                break;
            }
        }
        if(!flag) cout<<0<<' ';
    }
}