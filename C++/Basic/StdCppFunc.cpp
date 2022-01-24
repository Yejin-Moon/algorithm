#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(NULL));
    for(int i =0 ; i<5; i++)
    {
        printf("%d\n",rand()%100);
    }
    return 0;
}