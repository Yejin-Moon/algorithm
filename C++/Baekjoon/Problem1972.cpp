#include <iostream>
#include <set>
#include <string>
using namespace std;

int main()
{
    while(1)
    {
        string s;
        cin>>s;
        if(s=="*") break;
        int len = s.length();
        if(len<3) cout<<s<<" is surprising.\n";
        else
        {
            bool flag=false;
            for(int i=1; i<=len-2; i++)
            {
                set <string> ss;
                if(flag) break;
                flag=false;
                for(int j=0; j<len-i; j++)
                {
                    string tmp;
                    tmp+=s[j];
                    tmp+=s[j+i];
                    if(ss.find(tmp)!=ss.end())
                    {
                        flag=true;
                        break;
                    }
                    else ss.insert(tmp);
                }
            }
            if(flag) cout<<s<<" is NOT surprising.\n";
            else cout<<s<<" is surprising.\n";
        }
    }
}