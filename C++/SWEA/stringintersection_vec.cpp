#include <iostream>
#include <set>
#include <string>
using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin>>T;
	for(test_case = 1; test_case <= T; ++test_case)
	{
        set<string> v;
        int cnt=0;
        int a,b;
        cin>>a>>b;
        for(int j=0; j<a; j++)
        {
            string str;
            cin>>str;
            v.insert(str);
        }
        set<string>::iterator iter;
        for(int j=0; j<b; j++)
        {
            string s;
            cin>>s;
            iter=v.find(s);
            if(iter!=v.end()) cnt++;
        }
        
        printf("#%d %d\n",test_case,cnt);
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}