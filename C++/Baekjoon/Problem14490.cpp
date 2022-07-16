#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;


int eculidean(int a, int b)
{
    int n=a;
    while(n>0)
    {
        if(n%b==0) return b;
        else
        {
            int tmp=n%b;
            n=b;
            b=tmp;
        }
    }
    return 1;
}

int main()
{
    string str;
    cin>>str;
    istringstream ss(str);
    string stringbuffer;
    vector<string> v;
    while(getline(ss,stringbuffer,':'))
    {
        v.push_back(stringbuffer);
    }
    int a,b;
    stringstream ssInt1(v[0]);
    ssInt1>>a;
    stringstream ssInt2(v[1]);
    ssInt2>>b;
    int t = eculidean(a,b);
    cout<<a/t<<":"<<b/t;
}