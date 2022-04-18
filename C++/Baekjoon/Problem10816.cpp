#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    int N,M,a,b;
    cin>>N;
    vector<int> v1;
    vector<int> v2;

    for(int i=0; i<N; i++)
    {
        cin>>a;
        v1.push_back(a);
    }

    cin>>M;
    for(int i=0; i<M; i++)
    {
        cin>>b;
        v2.push_back(b);
    }

    sort(v1.begin(),v1.end());

    for(auto err:v2)
    {
        int cnt;
        cnt = upper_bound(v1.begin(),v1.end(),err)-lower_bound(v1.begin(),v1.end(),err);
        cout<<cnt<<" ";
    }
    return 0;
}