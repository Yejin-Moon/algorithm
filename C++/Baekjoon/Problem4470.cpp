#include <iostream>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        char str[51];
        getchar();//버퍼 비우기
        scanf("%[^\n]s",str);
        printf("%d. %s\n",i,str);
    }
}