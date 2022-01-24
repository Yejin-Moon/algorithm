#include <iostream>
#include <string>

//template 없을 때
int sum(int a, int b)
{
    return a+b;
}
double sum(double a, double b)
{
    return a+b;
}

//template 있을 때
template <typename T>
T sum(T a, T b){
    return a+b;
}

//인자 2개 받을 때 둘의 타입이 다른 경우
template <class T1, class T2>
void printAll(T1 a, T2 b)
{
    std::cout<<"T1 : "<< a << std::endl;
    std::cout<<"T2 : "<< b << std::endl;
    std::cout<<"T1 + T2 = "<<a+b<<std::endl;
}

int main()
{
    int a =1,b=2;
    double d1 = 2.2;
    double d2 = 3.3;
    //string 앞에 std
    std::string s1 = "Show me ";
    std::string s2 = "The money";

    std::cout<<"Total int : " << sum<int>(a,b)<<std::endl;
    std::cout<<"Total double : "<<sum<double>(d1,d2)<<std::endl;
    std::cout<<"Total string : "<<sum<std::string>(s1,s2)<<std::endl;

    return 0;
}