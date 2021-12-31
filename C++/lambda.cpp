#include <iostream>
#include <vector>
#include <functional>

using namespace std;

int evaluate(int(*func)(int, int),int x, int y){
    return func(x,y);
}

int main(){
    cout << evaluate([](int x, int y)->int{return x+y;},2,3)<<endl;
    cout << evaluate([](int x, int y){return x * y;},2,3)<< endl;
    [](int x, int y){cout << x << ", "<< y<<endl;}(2,3);

    auto f = [](int x, int y)-> int{return x - y;};
    cout << f(3,5)<< endl;
}