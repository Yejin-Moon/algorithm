#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    vector<int> v;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }

    int cnt=v[n-1];
    bool flag = true;
    bool flag2 = false;
    int dp = v[n-1];
    
    for(int i=n-2; i>=0; i=i-2)
    {
        cout<<cnt<<'\n';
        cout<<i<<'\n';
        if(i==0 && flag2 == true) break;
        else if(i==0 && flag2 == false && flag == true) 
        {
            cnt=cnt+v[i];
            break;
        }
        else if(i==0 && flag2 == false && flag == false) break; 
        if(flag==false) 
        {
            cnt=cnt+v[i]+v[i-1];
            flag = true;
        }
        else
        {
            int one = max(v[i],v[i-1]);
            if(v[i]==v[i-1]) one = v[i];
            cnt = cnt+one;
            if(one==v[i]) flag = false;
            else flag = true;
        }
    }
    cout<<cnt<<'\n';
}