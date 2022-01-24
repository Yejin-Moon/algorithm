#include <iostream>

using namespace std;

int factorial(int n);

int main()
{
    cout<< factorial(0) << endl;
    cout << factorial(1) << endl;
    cout << factorial(6) << endl;
    cout << factorial(10) << endl;

    return 0;
}

int factorial(int n){
    if(n==0){
        return 1;
    }
    else{
        return n * factorial(n-1);
    }
}