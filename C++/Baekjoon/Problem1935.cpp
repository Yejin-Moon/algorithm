#include <iostream>
#include <vector>
#include <string>
using namespace std;

double result(double a, double b, char c)
{
    if(c=='+') return b+a;
    else if(c=='-') return b-a;
    else if(c=='*') return b*a;
    else if(c=='/') return b/a;
}

int main()
{
    vector<double> v;
    int n;
    cin>>n;
    string s;
    cin>>s;
    int arr[27];
    for(int i=0; i<n; i++) cin>>arr[i];
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]>='A'&&s[i]<='Z') 
        {
            v.push_back(arr[s[i]-'A']);
        }
        else
        {
            double a=v.back();
            v.pop_back();
            double b=v.back();
            v.pop_back();
            double res = result(a,b,s[i]);
            v.push_back(res);
        }
    }
    printf("%.2f",v.back());
}