#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int absdiff(int a, int b)
{
    if(a>b) return a-b;
    else return b-a;
}

int main()
{
    int n;
    cin>>n;
    vector<int> v;
    int max=0;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    do{
        int sum=0;
        for(int i=0; i<n-1; i++)
        {
            sum+=absdiff(v[i],v[i+1]);
        }
        if(sum>max) max = sum;

    }while(next_permutation(v.begin(),v.end()));
    cout<<max;
    return 0;
}