#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    int m;
    cin>>m;
    for(int i=0; i<m; i++)
    {
        bool flag=false;
        int b;
        cin>>b;
        int left=0, right = v.size()-1;
        while(left<=right)
        {
            int mid = (left+right)/2;
            if(v[mid]==b)
            {
                flag=true;
                break;
            }
            else if(v[mid]>b) right=mid-1;
            else left=mid+1;
        }
        if(flag) cout<<"1 ";
        else cout<<"0 ";
    }
}