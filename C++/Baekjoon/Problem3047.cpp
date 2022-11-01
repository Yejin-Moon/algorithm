#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    char arr[4];
    vector<int> v;
    for(int i=0; i<3; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    scanf("%s",arr);
    for(int i=0; i<3; i++)
    {
        cout<<v[arr[i]-'A']<<' ';
    }
}