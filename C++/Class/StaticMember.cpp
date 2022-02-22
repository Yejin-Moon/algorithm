#include <iostream>
using namespace std;

class SoSimple
{
private:
    static int simObjCnt;
public:
    SoSimple()
    {
        simObjCnt++;
        cout<<simObjCnt<<") SoSimple Object"<<endl;
    }
};

int SoSimple::simObjCnt=0;

class SoComplex
{
private:
    static int cmxObjCnt;
public:
    SoComplex()
    {
        cmxObjCnt++;
        cout<<cmxObjCnt<<") SoComplex Object"<<endl;
    }
    SoComplex(SoComplex &copy)
    {
        cmxObjCnt++;
        cout<<cmxObjCnt<<") SoComplex Object"<<endl;
    }
};

int SoComplex::cmxObjCnt=0;

int main()
{
    SoSimple sim1;
    SoSimple sim2;

    SoComplex cmx1;
    SoComplex cmx2 = cmx1;
    SoComplex();
    return 0;
}