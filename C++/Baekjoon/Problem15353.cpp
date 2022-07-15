#include <iostream>
#include <string>
#include <vector>
using namespace std;

int str1[10001]={0,};
int str2[10001]={0,};
vector<int> v;

int main()
{
    string A="", B="";
    cin>>A>>B;
    int c=0;
    if(A.size()<B.size()) swap(A,B);
    int lenA = A.size();
    int lenB = B.size();
    for(int i=0; i<lenA; i++)
    {
        str1[i+1] = A[i]-'0';
    }
    for(int i=0; i<lenB; i++)
    {
        str2[i+1+lenA-lenB]=B[i]-'0';
    }
    for(int i=lenA; i>0; i--)
    {
        c=str1[i]+str2[i];
        if(c>9)
        {
            str1[i-1]++;
            c-=10;
        }
        v.push_back(c);
    }

    if(str1[0]!=0) v.push_back(1);
    for(int i=v.size()-1; i>=0; i--) cout<<v[i];
    return 0;
}
