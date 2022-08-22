#include<iostream>
#include<cstring>
using namespace std;
bool arr[1000005];
int N,P,Max;
int res=0;
int big=0;

int maxval(int a, int b)
{
 	if(a>b) return a;
    else return b;
}

void findres(int last)
{
    int num=0;
    int start=1, end = 1;
    while(end<last+1)
    {
        if(arr[end])
        {
            num++;
            end++;
            Max=maxval(Max,num);
        }
        else
        {
            if(P==0)
            {
                Max=maxval(Max,num);
                if(!arr[start]) P++;
                start++;
                num--;
            }
            else
            {
                P--;
                num++;
                end++;
            }
        }
    }
}

int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin>>T;
	for(test_case = 1; test_case <= T; ++test_case)
	{
        cin>>N>>P;
        memset(arr,false,sizeof(arr));
        int last = 0;
        for(int i=0; i<N; i++)
        {
            int a;
            cin>>a;
            last = maxval(a,last);
            arr[a]=true;
        }
        Max = P+1;
        findres(last);
        //if(big==0) big=1;
        printf("#%d %d\n",test_case,Max);
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}