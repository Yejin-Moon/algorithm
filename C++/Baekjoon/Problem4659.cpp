#include <iostream>
#include <string>
using namespace std;

int main()
{
    while(1)
    {
        string s;
        getline(cin,s);
        if(s=="end") break;
        int len = s.length();
        bool flag=false, flag2=true;
        for(int i=0; i<len; i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') 
            {
                flag=true;
            }
            if((len-i)-3>=0)
            {
                if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
                {
                    if(s[i+1]=='a'||s[i+1]=='e'||s[i+1]=='i'||s[i+1]=='o'||s[i+1]=='u')
                    {
                        if(s[i+2]=='a'||s[i+2]=='e'||s[i+2]=='i'||s[i+2]=='o'||s[i+2]=='u')
                        {
                            flag2=false;
                            break;
                        }
                    }
                }
                else if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u')
                {
                    if(s[i+1]!='a'&&s[i+1]!='e'&&s[i+1]!='i'&&s[i+1]!='o'&&s[i+1]!='u')
                    {
                        if(s[i+2]!='a'&&s[i+2]!='e'&&s[i+2]!='i'&&s[i+2]!='o'&&s[i+2]!='u')
                        {
                            flag2=false;
                            break;
                        }
                    }
                }
            }
            if((len-i)-2>=0 && (s[i]!='e' && s[i]!='o'))
            {
                if(s[i]==s[i+1]) 
                {
                    flag2=false;
                    break;
                }
            }
        }
        if(flag && flag2) cout<<"<"<<s<<">"<<" is acceptable.\n";
        else cout<<"<"<<s<<">"<<" is not acceptable.\n";
    }
}