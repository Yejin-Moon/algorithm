#include <iostream>
#include <vector>
#include <stack>
using namespace std;

//vector<int> v;
//int res[1000000];
/*
int black(int n, int g)
{
    int cnt=0;
    for(int i=0; i<n-2; i++)
    {
        for(int j=i+1; j<n-1; j++)
        {
            for(int k=j+1; k<n; k++)
            {
                int r = v[i]+v[j]+v[k];
                if(r==g) return r;
                res[cnt] = r;
                if(r>g) 
                {
                    cout<<res[cnt-1]<<'\n';
                    return res[cnt];
                }
                cnt++;
                if(r>g) 
                {
                    res.pop_back();//int a = res.back();//cout<<res.back()<<'\n';
                    //cout<<&res.back()<<'\n';
                    return res.back();
                }
            }
        }
    }
}
*/
int main()
{
    vector<int> v;
    int n, g;
    cin>>n>>g;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    int cnt=0;
    vector<int> res;
    for(int i=0; i<n-2; i++)
    {
        for(int j=i+1; j<n-1; j++)
        {
            for(int k=j+1; k<n; k++)
            {
                int r = v[i]+v[j]+v[k];
                if(r==g) 
                {
                    cout<<r<<'\n';
                    return r;
                }
                if(r>g) goto EXIT;
                res.push_back(r);
                
                /*if(r>g) 
                {
                    res.pop_back();//int a = res.back();//cout<<res.back()<<'\n';
                    //cout<<&res.back()<<'\n';
                    return res.back();
                }*/
            }
        }
    }
    //int result = black(n,g);
    //cout<<result<<'\n';
EXIT:
    cout<<res.back()<<'\n';
    return 0;
}