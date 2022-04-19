#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(int a, int b)
{
    if(a>b) return true;
    else return false;
}

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    
    int n;
    cin>>n;
    vector<int> a;
    vector<int> b;
    int ele;

    for(int i=0; i<n; i++)
    {
        cin>>ele;
        a.push_back(ele);
    }
    for(int i=0; i<n; i++)
    {
        cin>>ele;
        b.push_back(ele);
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), compare);


    int res=0;
    int e;
    for(int i=0; i<n; i++)
    {
        res += a[i]*b[i];
    }
    cout<<res<<'\n';
}