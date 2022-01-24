#include <iostream>

using namespace std;

void swap(int* var1, int* var2){
    int temp = *var1;
    *var1 = *var2;
    *var2 = temp;
}

int main()
{
    int a = 4, b= 5;
    cout << a << ", " << b << endl;
    swap(&a, &b);
    cout << a << ", "<< b << endl;

    return 0;
}