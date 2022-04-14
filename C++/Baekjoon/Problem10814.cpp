#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

class Point
{
    public:
    int idx;
    int a;
    string str;

    Point(int _idx, int _a, string _str)
    {
        idx = _idx;
        a = _a;
        str = _str;
    }
};

bool compare(Point& a, Point& b)
{
    if(a.a<b.a) return true;
    else if(a.a==b.a)
    {
        if(a.idx<b.idx) return true;
        else return false;
    }
    else return false;

}

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    
    int n;
    cin>>n;
    vector<Point> v;
    int a;
    string str;
    for(int i=0; i<n; i++)
    {
        cin>>a>>str;
        v.push_back(Point(i,a,str));
    }
    sort(v.begin(),v.end(),compare);

    for(int i=0; i<n; i++)
    {
        cout<<v[i].a<<' '<<v[i].str<<'\n';
    }
    return 0;
}