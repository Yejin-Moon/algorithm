#include <iostream>
using namespace std;

class Printer
{
private:
    char str[50] = {};
public:
    void SetString(char *st);
    void ShowString();
};

void Printer::SetString(char st[])
{
    for(int i =0;i<50;i++)
    {
        if(st=='\0') return;
        str[i]=*st;
        st++;
    }
    return;
}

void Printer::ShowString()
{
    cout<<str<<endl;
}

int main()
{
    Printer pnt;
    pnt.SetString("Hello world!");
    pnt.ShowString();

    pnt.SetString("I love C++");
    pnt.ShowString();
    return 0;
}