#include <iostream>

using namespace std;

class Base {
    public:
        void print_base() {cout << "Base" << endl;}
};

class Derived : private Base{
    public:
        void print_derived() {
            Base::print_base();

            cout<<"Derived"<< endl; }
        
};

int main() {
    Base base;
    Derived derived;

    base.print_base();

    derived.print_derived();

    return 0;
}