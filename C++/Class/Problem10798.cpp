#include <iostream>
using namespace std;

int main()
{
    char strarr[5][15] = {0,};
    for(int i=0; i<5; i++)
    {
        cin>>strarr[i];
    }
    for(int k=0; k<15; k++)
    {
        for(int j=0; j<5; j++)
        {
            if(strarr[j][k]!='\0')
            {
                cout<<strarr[j][k];
            }
        }
    }
    return 0;
}