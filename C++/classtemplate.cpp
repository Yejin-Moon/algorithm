#include <iostream>
#include <string>
using namespace std;

template <class T>
class Person{
private:
    string name;
    T height;
public:
    Person(string name, T height):name(name),height(height){}

    void printAll(){
        cout<<"name: "<<name<<endl;
        cout<<"number: "<<height<<endl;
    };
    void setName(string name){
        this->name = name;
    }
    void setNumber(T height){
        this->height = height;
    }
};

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