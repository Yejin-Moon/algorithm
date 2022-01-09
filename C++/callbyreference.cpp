#include <iostream>
using namespace std;

void swappointer(int *&ptr1, int *&ptr2)
{
    int *tmp = ptr1;
    ptr1 = ptr2;
    ptr2 = tmp;
}

int main()
{
    int num1 = 5;
    int *ptr1 = &num1;
    int num2 = 10;
    int *ptr2 = &num2;

    cout<<"before change"<<endl;
    cout<<*ptr1<<endl;
    cout<<*ptr2<<endl;

    swappointer(ptr1, ptr2);

    cout<<"after change"<<endl;
    cout<<*ptr1<<endl;
    cout<<*ptr2<<endl;
    return 0;
}