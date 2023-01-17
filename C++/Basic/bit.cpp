#include <iostream>
using namespace std;

void printbits(char c)
{
    for(int i=7; i>=0; i--) //8번째 비트(가장큰비트)부터 1인지 0인지
    {
        if(c&(1<<i)) cout<<"1";//c의 i번째 비트가 1이면
        else cout<<"0";
    }
}

int main()
{
    for(int i=-5; i<=5; i++)//-5~5까지의 비트를 출력
    {
        cout<<i<<" : ";
        printbits(i);
        cout<<"\n";
    }
}