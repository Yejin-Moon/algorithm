#include <iostream>
using namespace std;

struct meeting_type{
    int start;
    int end;
};

int N;
meeting_type Meetings[10];

int solve();

int main()
{
    cin>>N;
    for(int i=0; i<N; i++)
    {
        cin>>Meetings[i].start >> Meetings[i].end;
    }
    cout<<solve()<<endl;
    return 0;
}

int solve()
{
    for(int i=0; i<N-1; ++i)//회의시간 빨리 끝나는 순으로 정렬
    {
        for(int j=i+1; j<N; ++j)
        {
            if(Meetings[i].end>Meetings[j].end)
            {
                meeting_type tmp = Meetings[i];
                Meetings[i]=Meetings[j];
                Meetings[j]=tmp;
            }
        }
    }

    int lastEnd=0, cnt=0;
    for(int i=0; i<N; i++)
    {
        if(Meetings[i].start<lastEnd) continue;
        printf("(%d,%d)\n",Meetings[i].start,Meetings[i].end);
        lastEnd=Meetings[i].end;
        ++cnt;
    }
    return cnt;
}