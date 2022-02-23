#include <iostream>
using namespace std;

class SoSimple
{
public:
    static int simObjCnt;
public:
    SoSimple()
    {
        simObjCnt++;
    }
};

int SoSimple::simObjCnt=0;

int main()
{
    cout<<SoSimple::simObjCnt<<") SoSimple Object"<<endl;
    SoSimple sim1;
    SoSimple sim2;

    cout<<SoSimple::simObjCnt<<") SoSimple Object"<<endl;
    cout<<sim1.simObjCnt<<") SoSimple Object"<<endl;
    cout<<sim2.simObjCnt<<") SoSimple Object"<<endl;

    return 0;
}