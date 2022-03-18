#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

bool comp(pair<int, double> a, pair<int, double> b)
{
    if(a.second == b.second) a.first < b.first;
    return a.second > b.second;
}

int main()
{
    vector<int> v;
    int N = 8;
    pair<int, int> test = make_pair(1,2);
    vector<pair<int, double>> vv;
    v.push_back(1);
    v.push_back(3);
    v.push_back(2);
    v.push_back(1);
    v.push_back(0);

    for(int i=0; i<v.size(); i++)
    {
        vv.push_back(make_pair(i+1, (double)v[i] / N));
        N -= v[i];
    }

    sort(vv.begin(),vv.end(), comp);

    for(int i=0; i<vv.size(); i++)
    {
        cout<<vv[i].first<<" "<<vv[i].second << "\n";
    }
    return 0;
}