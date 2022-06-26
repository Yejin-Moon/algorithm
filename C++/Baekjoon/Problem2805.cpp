#include <iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    long long* tree = new long long[n];
    for(int i=0; i<n; i++)
    {
        cin>>tree[i];
    }
    long long high = 1000000000;
    long long low = 0;
    long long mid;
    long long cut;
    long long ans=0;
    while(low<=high)
    {
        mid=(low+high)/2;
        cut=0;
        for(int i=0; i<n; i++)
        {
            if(tree[i]>mid)
            {
                cut = cut+(tree[i]-mid);
            }
        }
        if(cut==m)
        {
            ans=mid;
            break;
        }
        else if(cut>m)
        {
            if(ans<mid)
            {
                ans=mid;
            }
            low = mid+1;
        }
        else if(cut<m)
        {
            high = mid-1;
        }
    }
    cout<<ans;
    delete[] tree;
    return 0;
}