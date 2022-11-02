#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        float val;
        string s;
        cin>>val>>s;
        if(s=="kg") printf("%.4f lb\n",val*2.2046);
        else if(s=="lb") printf("%.4f kg\n",val*0.4536);
        else if(s=="l") printf("%.4f g\n",val*0.2642);
        else if(s=="g") printf("%.4f l\n",val*3.7854);
    }
}