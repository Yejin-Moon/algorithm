#include <iostream>

using namespace std;

int add(int a, int b){
    return a+b;
}

int multiply(int a, int b){
    return a*b;
}

int evaluate(int (*f)(int, int), int x, int y){
    return f(x,y);
}

int main(){
    cout << add(2,3)<<endl;
    cout << multiply(2,3)<<endl;
    cout << evaluate(&add, 2, 3) << endl;
    cout << evaluate(&multiply, 2,3)<< endl;
}