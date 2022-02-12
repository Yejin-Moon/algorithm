#include <iostream>
using namespace std;

class AAA
{
private:
    int num;
public:
    void setNum(int n) { num = n; }
    int getNum() {return num;}

void AAA::setNum(int n)
{
    if(n<0 || n>100)
    {
        cout<<"error"<<endl;
        return;
    }
    num=n;
}
};
