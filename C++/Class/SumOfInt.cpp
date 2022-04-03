#include <iostream>
#include <vector>
using namespace std;

long long sum(vector<int> &a)
{
    long long ans = 0;
    while(!a.empty())
    {
        int b=a.back();
        ans = ans+b;
        a.pop_back();
    }
	return ans;
}

int main()
{
    vector<int> arr;
    int a[5];

    for(int i=0;i<5;i++)
    {
        cin>>a[i];
        arr.push_back(a[i]);
    }
    int res = sum(arr);
    cout<<res;
}