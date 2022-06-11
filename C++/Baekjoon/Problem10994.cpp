#include <iostream>
using namespace std;
int cnt=0;
char arr[401][401];
void star(int n,int x, int y)
{
    if(n==0) return;
    else
    {
        int last = 4*(n-1)+1;
        for(int i=0; i<last; i++)
        {
            arr[x+i][y]='*';
        }
        for(int i=0; i<last; i++)
        {
            arr[x][y+i] = '*';
        }
        for(int i=0; i<last; i++)
        {
            arr[x+last-1][y+i]='*';
        }
        for(int i=0; i<last; i++)
        {
            arr[x+i][y+last-1]='*';
        }
        star(n-1,x+2,y+2);
    }
}

int main()
{
    int n;
    cin>>n;
    int idx = 4*(n-1)+1;
    star(n,0,0);
    for(int i=0; i<idx; i++)
    {
        for(int j=0; j<idx; j++)
        {
            if(arr[i][j]=='*') cout<<arr[i][j];
            else cout<<" ";
        }
        cout<<endl;
    }
}