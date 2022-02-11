#include <iostream>
#include <cstring>
using namespace std;

class naturalNumber
{
private:
    int num;

public:
    void Init(int n)
    {
        if (n > 0)
        {
            num = n;
            cout<<"num: "<<num<<endl;
        }
        else
        {
            cout<<"It is not a natural number."<<endl;
        }
    }
};

int main()
{
    naturalNumber n;
    n.Init(5);
    return 0;
}