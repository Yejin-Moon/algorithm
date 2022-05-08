#include <iostream>
#include <string>
using namespace std;

struct Poket
{
    int n;
    string name;
};

int main()
{
    int a,b;
    cin>>a>>b;
    Poket *p = new Poket[a+1];
    for(int i=1; i<=a; i++)
    {
        p[i].n = i;
        cin>>p[i].name;
    }

    //string str;
    char str[21];
    for(int i=0; i<b; i++)
    {
        cin>>str;
        if(str[0]>'0' && str[0]<'9')
        {
            int an;
            sscanf(str,"%d", &an);
            for(int j=1; j<=a; j++)
            {
                if(p[j].n == an)
                {
                    cout<<p[j].name<<'\n';
                    break;
                }
            }
        }
        for(int j=1; j<=a; j++)
        {
            if(p[j].name == str)
            {
                cout<<p[j].n<<'\n';
                break;
            }
        }
    }
}