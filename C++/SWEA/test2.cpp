#include <iostream>
#include <string>
 
#define MAX 2
#define ll long long
using namespace std;
 
int Arr[MAX];
int Select[MAX];
int x,y;
string a,result;
ll N,res=-1;
 
void DFS(int Cnt, int target)
{
    if (Cnt == target)
    {
        int tmp;
        string str;
        for (int i = 0; i < target; i++)
        {
            str+=Select[i]+'0';
        }
        //cout<<str<<' ';
        ll num = stoll(str);
        if(num>N) return;
        else res=num;
        return;
    }
 
    for (int i = 0; i < MAX; i++)
    {
        Select[Cnt] = Arr[i];
        DFS(Cnt + 1,target);
    }
}

int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin>>T;
	for(test_case = 1; test_case <= T; ++test_case)
	{
        res=-1;
        cin>>N>>x>>y;
    	a=to_string(N);
    	int len = a.length();
    	Arr[0] = x;
    	Arr[1] = y;
 
    	for(int i=1; i<=len; i++)
    	{
        	DFS(0,i);
    	}
    	if(res==0) res=-1;
    	printf("#%d %lld\n",test_case,res);
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}