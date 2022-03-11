#include <iostream>
using namespace std;

enum StudentNames
{
    KENNY,
    KYLE,
    STAN,
    BUTTERS,
    CARTMAN,
    MAX_STUDENTS
};

int main()
{
    int scores[MAX_STUDENTS];
    scores[STAN] = 76;

    cout<<"STAN's score is "<<scores[STAN]<<endl;

    return 0;
}