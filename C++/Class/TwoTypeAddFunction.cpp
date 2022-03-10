#include <iostream>
using namespace std;

template <typename T>
T Add(T num1, T num2)
{
    cout<<"T Add"<<endl;
    return num1+num2;
}

int Add(int num1, int num2)
{
    cout<<"int Add"<<endl;
    return num1+num2;
}

double Add(double num1, double num2)
{
    cout<<"double Add"<<endl;
    return num1+num2;
}

int main()
{
    cout<<Add(5,7)<<endl;
    cout<<Add(1.2,3.2)<<endl;
    cout<<Add<int>(5,7)<<endl;
    cout<<Add<double>(1.2,3.2)<<endl;
    return 0;
}