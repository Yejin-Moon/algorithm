#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n1, n2;
    cin>>n1;
    vector<long> v1;
    vector<long> v2;
    long a;

    for(int i=0; i<n1; i++)
    {
        cin>>a;
        v1.push_back(a);
    }
    cin>>n2;
    for(int i=0; i<n2; i++)
    {
        cin>>a;
        v2.push_back(a);
    }

    sort(v1.begin(),v1.end());
    for(auto i:v2)
    {
        int flag = 0;
        int right = v2.size()-1;
        int left = 0;
        while(left<=right)
        {
            int mid = (right+left)/2;
            if(i==v1[mid])
            {
                flag = 1;
                cout<<"1"<<'\n';
                break;
            }
            else if(i<v1[mid]) right = mid-1;
            else if(i>v1[mid]) left = mid+1;
        }
        if(flag==0) cout<<"0"<<'\n';
    }
    return 0;
}