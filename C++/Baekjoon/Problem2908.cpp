#include <iostream>
using namespace std;

int main()
{
    char num1[4], num2[4];
    bool flag=false;
    scanf("%s %s",num1, num2);
    for(int i=2; i>=0; i--)
    {
        if(num1[i]>num2[i])
        {
            flag=true;
            break;
        }
        else if(num1[i]<num2[i]) break;
    }
    if(flag) printf("%c%c%c",num1[2],num1[1],num1[0]);
    else printf("%c%c%c",num2[2],num2[1],num2[0]);
}