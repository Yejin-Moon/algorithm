#include <iostream>
#include <string>
using namespace std;

int main()
{
    string mbti;
    cin>>mbti;

    int n,res=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        string s;
        cin>>s;
        if(s.compare(mbti)==0) res++;
    }
    cout<<res;
}