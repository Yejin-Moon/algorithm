#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    int sum=0;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        if(a>=0) v.push_back(a);
        else
        {
            while(!v.empty())
            {
                sum+=v.back();
                v.pop_back();
            }
            v.push_back(sum);
            sum=0;
        }
    }
    while(!v.empty())
    {
        cout<<v.back()<<" ";
        v.pop_back();
    }
}