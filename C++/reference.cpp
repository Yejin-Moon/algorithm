#include <iostream>
using namespace std;

int main()
{
    int num1=1024;
    int &num2 = num1;

    cout<<"Before Change"<<endl;
    cout<<num1<<endl;
    cout<<num2<<endl;

    num2 = 3000;

    cout<<"After Change"<<endl;

    cout<<num1<<endl;
    cout<<num2<<endl;
}


