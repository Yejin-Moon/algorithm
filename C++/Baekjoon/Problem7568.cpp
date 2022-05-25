#include <iostream>
using namespace std;

int x[50];
int y[50];

int main()
{
    int n;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>x[i]>>y[i];
    }

    int k=0;
    for(int i=0; i<n; i++)
    {
        k=0;
        for(int j=0; j<n; j++)
        {
            if(x[i]<x[j] && y[i]<y[j])
            {
                k++;
            }
        }
        cout<<k+1<<" ";
    }
}
