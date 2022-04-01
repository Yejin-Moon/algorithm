#include <iostream>
using namespace std;

void StringPrint(char *str)
{
    if(*str=='\0')
    {
        return;
    }
    else
    {
        StringPrint(str+1);
        cout<<*str;
    }
}

int main()
{
    char str[10] = "abcde"; 
    StringPrint(str);
    return 0;
}