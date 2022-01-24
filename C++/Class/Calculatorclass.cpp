#include <iostream>
using namespace std;

class Calculator
{
private:
    int Acnt;
    int Dcnt;
    int Mcnt;
    int mulcnt;
public:
    double Add(double a, double b);
    double Div(double a, double b);
    double Min(double a, double b);
    void ShowOpCount();
    void Init();
};

void Calculator::Init()
{
    Acnt = 0;
    Dcnt = 0;
    Mcnt = 0;
    mulcnt = 0;
}
double Calculator::Add(double a, double b)
{
    Acnt++;
    return a+b;
}
double Calculator::Div(double a, double b)
{   
    Dcnt++;
    return a/b;
}
double Calculator::Min(double a, double b)
{
    Mcnt++;
    return a-b;
}
void Calculator::ShowOpCount()
{
    cout<<"Add : "<<Acnt<<" ";
    cout<<"Minus : "<<Mcnt<<" ";
    cout<<"Multiple : "<<mulcnt<<" ";
    cout<<"Divide : "<<Dcnt<<endl;
}

int main()
{
    Calculator cal;
    cal.Init();
    cout<<"3.2 + 2.4 = "<<cal.Add(3.2, 2.4)<<endl;
    cout<<"3.5 / 1.7 = "<<cal.Div(3.5, 1.7)<<endl;
    cout<<"2.2 - 1.5 = "<<cal.Min(2.2, 1.5)<<endl;
    cout<<"4.9 / 1.2 = "<<cal.Div(4.9, 1.2)<<endl;
    cal.ShowOpCount();
    return 0;
}