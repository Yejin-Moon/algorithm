#include <iostream>

using namespace std;

int main(){
    int x = 5;
    int y =x;
    int &r = x;

    cout << "x = "<<x<<'\n';
    cout<< "y = "<<y<<'\n';
    cout<< "r = "<<r<<'\n';

    x=7;

    cout << "---------------"<<endl;
    cout << "x = "<< x << '\n';
    cout << "y = "<< y << '\n';
    cout << "r = "<< r << '\n';

    return 0;
}