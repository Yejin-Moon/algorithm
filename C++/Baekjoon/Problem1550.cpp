#include <iostream>
#include <cstring>
using namespace std;

char num[6];
int main()
{
    scanf("%s",num);
    int len = strlen(num);
    int sum=0, hex=1;
    for(int i=len-1; i>=0; i--)
    {
        if(num[i]>='A'&&num[i]<='F') num[i]=num[i]-'A'+10;
        else num[i]-='0';
        sum+=num[i]*hex;
        hex*=16;
    }
    printf("%d",sum);
}