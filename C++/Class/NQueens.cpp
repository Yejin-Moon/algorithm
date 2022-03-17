#include <iostream>
#include <stdlib.h>
#define MAX 14
using namespace std;

int n;
int cnt = 0;
int queen_loc[MAX];

int possible_loc(int row)
{
    for(int i=0; i<row; ++i)
    {
        if((queen_loc[i] == queen_loc[row]) || (row-i == (abs(queen_loc[row]-queen_loc[i]))))
        {
            return 0;
        }
    }
    return 1;
}

void nqueen(int row)
{
    if(row==n)
    {
        cnt++;
        return;
    }
    else
    {
        for(int col=0; col<n; ++col)
        {
            queen_loc[row] = col;
            if(possible_loc(row))
            {
                nqueen(row+1);
            }
        }
    }
}

int main()
{
    cin>>n;
    nqueen(0);
    cout<<cnt;
    return 0;
}