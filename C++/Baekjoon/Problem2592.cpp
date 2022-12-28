#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v;
    for(int i=0; i<10; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    int frenum=v[0], frecnt=1, cnt=1, sum=0;

    for(int i=0; i<9; i++)
    {
        if(v[i]==v[i+1]) cnt++;
        else cnt=1;
        if(cnt>frecnt)
        {
            frecnt=cnt;
            frenum=v[i];
        }
        sum+=v[i];
    }
    cout<<(sum+v[9])/10<<'\n';
    cout<<frenum;
}