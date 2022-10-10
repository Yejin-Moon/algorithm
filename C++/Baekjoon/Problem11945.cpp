#include <iostream>
#include <string>
using namespace std;

string s;

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    for(int i=0; i<n; i++)
    {
        cin>>s;
        for(int j=m-1;j>=0;j--)
        {
            printf("%c",s[j]);
        }
        printf("\n");
    }
}