#include <iostream>
#include <string>
using namespace std;

int main()
{
    int arr[27];
    fill_n(arr,27,-1);

    string s;
    cin>>s;

    for(int i=0; i<s.length(); i++)
    {
        if(arr[s[i]-'a']==-1)
        {
            arr[s[i]-'a']=i;
        }
    }

    for(int i=0; i<26; i++)
    {
        cout<<arr[i]<<" ";
    }
}