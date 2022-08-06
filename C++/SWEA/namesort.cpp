#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

char name[20000][51];
int idx[20000];

bool cmp(int i, int j)
{
    if(strlen(name[i])==strlen(name[j]))
    {
        return (strcmp(name[i],name[j])<0);
    }
    else return (strlen(name[i])<strlen(name[j]));
}

int main(int argc, char** argv)
{
	int test_case;
	int T;
    scanf("%d",&T);
	for(test_case = 1; test_case <= T; ++test_case)
	{
        int n;
    	scanf("%d",&n);
    	for(int i=0; i<n; i++)
    	{
        	scanf("%s",name[i]);
        	idx[i]=i;
    	}
    	sort(idx,idx+n,cmp);
    	printf("#%d\n",test_case);
        char*tmp="";
   		for(int i=0; i<n; i++)
    	{
        	if(strcmp(tmp,name[idx[i]]))
            {
        		printf("%s\n",name[idx[i]]);
            	tmp=name[idx[i]];
            }
    	}
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}