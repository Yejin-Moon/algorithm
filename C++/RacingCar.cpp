#include <iostream>
using namespace std;

namespace CAR_CONST
{
    enum
    {
        ID_LEN      =20,
        MAX_SPD     =200,
        FUEL_STEP   =2,
        ACC_STEP    =10,
        BRK_STEP    =10
    };
}

struct Car
{
    char gamerID[CAR_CONST::ID_LEN];
    int fuelGauge;
    int curSpeed;

    void ShowCarState(const Car &car)
    {
        cout<<"Owner ID: "<<car.gamerID<<endl;
        cout<<"Amount of fuel: "<<car.fuelGauge<<"%"<<endl;
        cout<<"Current Speed: "<<car.curSpeed<<"km/s"<<endl<<endl;
    }

    void Accel(Car &car)
    {
        if(car.fuelGauge<=0)
        {
            return;
        }
        else
        {
            car.fuelGauge-=CAR_CONST::FUEL_STEP;
        }

        if(car.curSpeed+CAR_CONST::ACC_STEP>=CAR_CONST::MAX_SPD)
        {
            car.curSpeed=CAR_CONST::MAX_SPD;
            return;
        }
        car.curSpeed+-CAR_CONST::ACC_STEP;
    }

    void Break(Car &car)
    {
        if(car.curSpeed<CAR_CONST::BRK_STEP)
        {
            car.curSpeed=0;
            return;
        }
        car.curSpeed-=CAR_CONST::BRK_STEP;
    }
};

int main()
{
    Car run99 = {"run99",100,20};
    run99.Accel(run99);
    run99.Accel(run99);
    run99.ShowCarState(run99);
    run99.Break(run99);
    run99.ShowCarState(run99);

    Car sped77={"sped77",100,0};
    sped77.Accel(sped77);
    sped77.Break(sped77);
    sped77.ShowCarState(sped77);
    return 0;
}