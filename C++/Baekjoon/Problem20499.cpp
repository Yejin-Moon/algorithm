#include <iostream>
#include <string>
using namespace std;

int main()
{
    int idx=0;
    int arr[3] = {0,0,0};
    string s;
    cin>>s;
    int len = s.length();
    for(int i=0; i<len; i++)
    {
        if(s[i+1]=='/' || i==len-1)
        {
            arr[idx]+=s[i]-'0';
            i++;
        }
        else if(s[i+2]=='/' || i==len-2)
        {
            arr[idx]+=((s[i]-'0')*10);
            arr[idx]+=s[i+1]-'0';
            i+=2;
        }
        idx++;
    }
    if(arr[0]+arr[2]<arr[1] || arr[1]==0) cout<<"hasu";
    else cout<<"gosu";
}