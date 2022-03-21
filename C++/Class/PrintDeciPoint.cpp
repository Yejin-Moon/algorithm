#include <cstdio>

void Print(const int& n, const double& d)
{
    printf("%.*f\n",n,d);
}

int main()
{
    const double d = 3.141592653589793238462643383279;

    Print(0,d);
    Print(4,d);
    Print(8,d);
    Print(16,d);

    return 0;
}