#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main()
{
    vector<int> v;
    int a,b;
    cin>>a>>b;
    v.push_back(a);
    v.push_back(b);
 
    sort(v.begin(), v.end());
 
    do
    {
        for (int i = 0; i < 2; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    } while (next_permutation(v.begin(), v.end()));
 
    return 0;
}
