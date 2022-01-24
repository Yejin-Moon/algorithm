#include <iostream>
using namespace std;

int main()
{
    int num = 12;
    int *ptr = &num;
    int **dptr = &ptr;

    cout<<&ptr<<endl;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<&dptr<<endl;
    cout<<dptr<<endl;
    cout<<*dptr<<endl;
    cout<<**dptr<<endl;
}


