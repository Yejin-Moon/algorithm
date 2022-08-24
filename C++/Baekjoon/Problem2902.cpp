#include <iostream>
using namespace std;

int main()
{
    char str[101];
    scanf("%s",str);
    for(int i=0; str[i]!=0; i++)
    {
        if(i==0 || str[i-1]=='-') printf("%c",str[i]);
    }
}