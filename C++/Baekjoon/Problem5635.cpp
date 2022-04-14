#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Birth
{
    public:
    string name;
    int day;
    int month;
    int year;

    Birth(string _n, int d, int m, int y)
    {
        name = _n;
        day = d;
        month = m;
        year = y;
    }
};

bool compare(Birth& a, Birth& b)
{
    if(a.year<b.year) return true;
    else if(a.year == b.year)
    {
        if(a.month<b.month) return true;
        else if(a.month == b.month)
        {
            if(a.day<b.day) return true;
            else return false;
        }
        else return false;
    }
    else return false;
}

int main()
{
    int n;
    cin>>n;

    string str;
    int d,m,y;
    vector<Birth> v;
    for(int i=0; i<n; i++)
    {
        cin>>str>>d>>m>>y;
        v.push_back(Birth(str,d,m,y));
    }
    sort(v.begin(),v.end(),compare);

    cout<<v[n-1].name<<'\n';
    cout<<v[0].name<<'\n';
    return 0;
}