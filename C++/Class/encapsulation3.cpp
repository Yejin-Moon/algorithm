#include <iostream>
using namespace std;

class Moon
{
private:
    int moon;

public:
    void set_moon(int m)
    {
        moon = m;
    }
    int return_moon()
    {
        return moon;
    }
};

int main()
{
    Moon m1;
    m1.set_moon(7);
    cout<<m1.return_moon()<<endl;
    return 0;
}