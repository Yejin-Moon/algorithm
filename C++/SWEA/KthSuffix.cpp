#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string arr[400];
string ans;
int N,idx;
int main(int argc, char** argv)
{
	int test_case,T;
	scanf("%d",&T);
	for(test_case = 1; test_case <= T; ++test_case)
	{
        string s;
        scanf("%d",&N);
        cin>>s;
        idx=0;
        int len = s.length();
        for(int i=0; i<len; i++)
        {
            string tmp="";
            for(int j=i; j<len; j++) tmp+=s[j];
            arr[idx++]=tmp;
        }
        if(N-1>=idx) ans="none";
        else
        {
            sort(arr,arr+idx);
            ans=arr[N-1];
        }
        printf("#%d %s\n",test_case,ans.c_str());
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}