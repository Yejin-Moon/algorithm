#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str[1001];
    cin.getline(str,1001);
    int len = strlen(str);
    int idx=0;
    char arr[4]={'U','C','P','C'};
    for(int i=0; i<len; i++)
    {
        if((str[i]>'a'&&str[i]<'z') || str[i]==' ') continue;
        if(str[i]==arr[idx])
        {
            idx++;
        }
        if(idx==4) break;
    }
    if(idx==4) printf("I love UCPC\n");
    else printf("I hate UCPC");
}