#include <iostream>
#include <string>
using namespace std;

int arr[26];
int big=0;

int main()
{
    string str;
    while(getline(cin,str))
    {
        int len = str.length();
        for(int i=0; i<len; i++)
        {
            if(str[i]==' ') continue;
            else arr[str[i]-'a']++;
            if(arr[str[i]-'a']>big) big=arr[str[i]-'a'];
        }
    }
    for(int i=0; i<26; i++)
    {
        if(arr[i]==big) printf("%c",i+'a');
    }
}