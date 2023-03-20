#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    while(getline(cin,s))
    {
        int small=0, big=0, num=0, space=0;
        int len = s.length();
        for(int i=0; i<len; i++)
        {
            if(s[i]>='a'&&s[i]<='z') small++;
            else if(s[i]>='A'&&s[i]<='Z') big++;
            else if(s[i]>='0'&&s[i]<='9') num++;
            else if(s[i]==' ') space++;
        }
        cout<<small<<" "<<big<<" "<<num<<" "<<space<<'\n';
    }
}