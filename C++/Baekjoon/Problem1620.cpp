#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    //ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	//cout.tie(NULL);

    int n,m;
    cin>>n>>m;
    vector<string> v1;
    vector<pair<string, int> >v2;
    v1.push_back("");

    for(int i=1; i<=n; i++)
    {
        string s;
        cin>>s;
        v1.push_back(s);
        v2.push_back({s,i});
    }

    sort(v2.begin(),v2.end());

    char str[21];
    for(int i=0; i<m; i++)
    {
        cin>>str;
        if(str[0]>'0' && str[0] <'9')
        {
            int a;
            sscanf(str,"%d",&a);
            cout<<v1[a]<<'\n';
        }
        else
        {
            int mid = 0;
            int low = 0;
            int high = v2.size()-1;

            while(low<=high)
            {
                mid = (low+high)/2;
                if(v2[mid].first==string(str))
                {
                    cout<<v2[mid].second<<'\n';
                    break;
                }
                else if(v2[mid].first<string(str))
                {
                    low = mid+1;
                }
                else
                {
                    high = mid-1;
                }
            }
        }
    }

}