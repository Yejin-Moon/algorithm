#include<iostream>
#include<string>
#include<set>
using namespace std;
string ans,s;
int N;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin>>T;
	for(test_case = 1; test_case <= T; ++test_case)
	{
        set<string> se;
        cin>>N>>s;
        int len = s.length();
        for(int i=0; i<len; i++)
        {
         	for(int j=0; j<len; j++)
            {
                se.insert(s.substr(i,j+1));
            }
        }
        if(se.size()<N) ans="none";
        else
        {
            set<string>::iterator iter = se.begin();
            for(int i=0; i<N-1; i++) iter++;
            ans=*iter;
        }
        printf("#%d %s\n",test_case,ans.c_str());
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}