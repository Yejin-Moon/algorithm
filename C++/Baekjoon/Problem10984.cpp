#include <iostream>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0; i<t; i++)
    {
        int n;
        scanf("%d",&n);
        int tc=0;
        float tg=0;
        for(int j=0; j<n; j++)
        {
            int c;
            float g;
            scanf("%d %f",&c,&g);
            tc+=c;
            tg+=(c*g);
        }
        printf("%d %.1f\n",tc,tg/tc);
    }
}