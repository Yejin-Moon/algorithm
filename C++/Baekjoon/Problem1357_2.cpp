#include <iostream>
using namespace std;

int rev(int num)
{
    int sum=0;
    while(num)
    {
        sum=num%10+sum*10;
        num=num/10;
    }
    return sum;
}

int main()
{
    int x,y;
    cin>>x>>y;
    int result = rev(rev(x)+rev(y));
    cout<<result;
    return 0;
}