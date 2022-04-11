#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    while(1)
    {
        int flag=0;
        getline(cin,str);
        if(str=="0") break;
        int len = str.length();
        for(int i=0; i<len/2+1; i++)
        {
            if(str[i]==str[len-1])
            {
                len--;
            }
            else 
            {
                cout<<"no"<<endl;
                flag=1;
                break;
            }
        }
        if(flag!=1) cout<<"yes"<<endl;
    }
    return 0;
}