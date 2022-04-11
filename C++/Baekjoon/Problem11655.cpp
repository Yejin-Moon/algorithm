#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    getline(cin,str);
    for(int i=0; i<str.length(); i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            if(str[i]+13>'Z')
            {
                printf("%c",(str[i]+13)%'Z'+'A'-1);
            }
            else printf("%c",str[i]+13);
        }
        else if(str[i]>='a' && str[i]<='z')
        {
            if(str[i]+13>'z')
            {
                printf("%c",(str[i]+13)%'z'+'a'-1);
            }
            else printf("%c",str[i]+13);
        }
        else
        {
            cout<<str[i];
        }
    }
    return 0;
}