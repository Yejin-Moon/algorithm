#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
string arr[10002];

vector<int> n1,n2,res;
int sum;

string stringsum(string a, string b)
{
    string s,tmp;
    if(a.size()<b.size())
    {
        tmp=a;
        a=b;
        b=tmp;
    }
    n1.push_back(0);
    n2.push_back(0);

    int len = a.size()-b.size();
    for(int i=0; i<len; i++) n2.push_back(0);
    for(int i=0; i<a.size(); i++) n1.push_back(a[i]-'0');
    for(int i=0; i<b.size(); i++) n2.push_back(b[i]-'0');

    for(int i=a.size(); i>0; i--)
    {
        sum=n1[i]+n2[i];
        if(sum>=10)
        {
            n1[i-1]++;
            sum-=10;
        }
        res.push_back(sum);
    }

    if(n1.front()!=0) s.push_back('1');
    for(int i=res.size()-1;i>=0; i--) s.push_back(res[i]+'0');
    n1.clear();
    n2.clear();
    res.clear();
    return s;
}
int main()
{
    int n;
    cin>>n;
    arr[0]='0';
    arr[1]='1';
    for(int i=2; i<=n; i++)
    {
        arr[i]=stringsum(arr[i-1],arr[i-2]);
    }
    cout<<arr[n];
}