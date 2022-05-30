#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    int n;
    cin>>n;

    vector<int> v;
    vector<int> v2;

    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
        v2.push_back(a);
    }

    sort(v2.begin(), v2.end());
    int arr[1001] = {0,};
    int c=0;
    for(int j=0; j<n; j++)
    {
        for(int i=0; i<n; i++)
        {
            if(v[i]==v2.front()) 
            {
                arr[i]=c;
                v[i] = 0;
                v2.erase(v2.begin());
                c++;
                break;
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}