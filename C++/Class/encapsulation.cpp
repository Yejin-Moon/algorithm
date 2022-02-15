#include <iostream>
#include <string>
using namespace std;

class Unit
{
    int num;
    string name;
    int hp;

public:
    Unit(int _num, string _name)
    {
        num = _num;
        name = _name;
        hp = 100;
    }
    void Train(int hour)
    {
        cout<<num<<"Unit("<<name<<") is training."<<endl;
        hp += hour;
    }
    void View()
    {
        cout<<num<<"Unit, Unit name: "<<name<<", HP: "<<hp<<endl;
    }
};

int main()
{
    Unit unit(3,"abc");
    unit.Train(5);
    unit.View();
    unit.View();
    return 0;
}