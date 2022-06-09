#include <iostream>
#include <vector>
using namespace std;

int arr[100001];

int main()
{
    int n;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        arr[i]=a;
    }

    vector<int> v;
    vector<char> ans;
    int cnt=0;
    for(int i=1; i<=n; i++)
    {
        v.push_back(i);
        ans.push_back('+');

        while(!v.empty() && v.back()==arr[cnt])
        {
            v.pop_back();
            ans.push_back('-');
            cnt++;
        }
    }
    if(!v.empty()) cout<<"NO";
    else{
        for(auto i:ans)
        {
            cout<<i<<'\n';
        }
    }
}