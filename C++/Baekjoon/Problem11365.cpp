#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<char> v;
    while(1)
    {
        char str[510];
        cin.getline(str,501,'\n');
        if(str[0]=='E'&&str[1]=='N'&&str[2]=='D') break;
        for(int i=0; str[i]!=0; i++)
        {
            v.push_back(str[i]);
        }
        for(int i=0; !v.empty(); i++)
        {
            cout<<v.back();
            v.pop_back();
        }
        cout<<endl;
    }
}