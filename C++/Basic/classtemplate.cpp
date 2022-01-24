#include <iostream>
#include <string>
using namespace std;

template <class T>
class Person{
private:
    string name;
    T height;
public:
    Person(string name, T height);
    void printAll();
    void setName(string name);
    void setNumber(T height);
};

template <class T>
Person<T>::Person(string name, T height):name(name), height(height){}

template <class T>
void Person<T>::printAll(){
    cout<<"name: "<<name<<endl;
    cout<<"number: "<<height<<endl;
};

template <typename T>
void Person<T>::setName(string name){
    this->name = name;
}

template <typename T>
void Person<T>::setNumber(T height){
    this->height=height;
}

int main()
{
    Person<int> p1("Mr.Dev C++",173);
    Person<string> p2("Mr. m","155cm");

    p1.printAll();
    p2.printAll();
    cout<<endl;
    p1.setNumber(188);
    p2.setNumber("2m 10cm");
    cout<<endl;
    p1.printAll();
    p2.printAll();
    return 0;
}