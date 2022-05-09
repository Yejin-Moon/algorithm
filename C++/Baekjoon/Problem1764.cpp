#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<string> v1;
    vector<string> v2;

    for(int i=0; i<n; i++)
    {
        string s;
        cin>>s;
        v1.push_back(s);
    }
    for(int i=0; i<m; i++)
    {
        string s;
        cin>>s;
        v2.push_back(s);
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    vector<string> v3;

    for(int i=0; i<n; i++)
    {
        int low = 0;
        int high = m-1;
        while(low<=high)
        {
            int mid = (low+high)/2;
            if(v2[mid]==v1[i])
            {
                v3.push_back(v1[i]);
                break;
            }
            else if(v2[mid]<v1[i]) low = mid+1;
            else if(v2[mid]>v1[i]) high = mid-1;
        }
    }

    cout<<v3.size()<<'\n';
    for(auto i:v3)
    {
        cout<<i<<'\n';
    }
}